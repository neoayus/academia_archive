// will be using snake_case for variables : 
// libraries included 
#include<bits/stdc++.h> // Header file that includes every standard library.
#include<conio.h> // This header contains console input-output functions. 
#include<windows.h> // Standard Window Library (used for co-ordinate sysytem). 

using namespace std;

#define MAX_LENGTH 1000 // maximum snake length defined using macro. 

// setting constant for all the direction : 
const char direction_up = 'U';
const char direction_down = 'D';
const char direction_left = 'L';
const char direction_right = 'R';

// declaring console size globally
int console_width, console_height;

void initScreen()   //function to initialize screen. 
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // brings console handle (pre-defined class in windows.h )
    CONSOLE_SCREEN_BUFFER_INFO csbi; // brings buffering info 
    GetConsoleScreenBufferInfo(hConsole, &csbi);

    //getting console width and height using above function. 
    console_height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    console_width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
}

struct Point{ // defining datatype for point/dots/food displayed on console. 
    int xCoord;
    int yCoord;  // for X and Y coordinate of the points connected together 

    Point(){
    }
    Point(int x, int y)
    {
        xCoord = x;
        yCoord = y;
    }
};


// Creating Class for Snake's Body : 
class Snake{
    int length; // length of array 
    char direction; // for direction the snake will move 
public:
    Point body[MAX_LENGTH]; // body of snake
    Snake(int x, int y) // constructor for snake class to set default valueues 
    {
       length = 1;
       body[0] = Point(x,y);
       direction = direction_right;
    }
    
    // ~snake(){ //destructor to delete the snake body when class exit's 
    //     delete[] body ; 
    // }
    
    int getLength(){ //function to return snake's length(i.e. score) 
        return length;
    }

    void changeDirection(char newDirection){ //function to update direction on key press 
        if(newDirection == direction_up && direction != direction_down){
            direction = newDirection; 
        }
        else if(newDirection == direction_down && direction != direction_up){
            direction = newDirection;
        }
        else if(newDirection == direction_left && direction != direction_right){
            direction = newDirection;
        }
        else if(newDirection == direction_right && direction != direction_left){
            direction = newDirection;
        }
    }


    bool move(Point food){ // member function to define snake's movement 

        for(int i= length-1;i>0;i--){  // lenght = 4. // defining snake's movement 
            body[i] = body[i-1];
        }

        switch(direction){ //changing snake's body/frame. 
            int value;
            case direction_up:
                value = body[0].yCoord;
                body[0].yCoord = value-1;
                break;
            case direction_down:
                value = body[0].yCoord;
                body[0].yCoord = value+1;
                break;
            case direction_right:
                value = body[0].xCoord;
                body[0].xCoord = value+1;
                break;
            case direction_left:
                value = body[0].xCoord;
                body[0].xCoord = value-1;
                break;
        }

        //for case : when snake bites itself (i.e. head is same as food )
        for(int i=1;i<length;i++){
            if(body[0].xCoord == body[i].xCoord && body[0].yCoord == body[i].yCoord)
            {
                return false;
            }
        }

        //for case : when snake eats food (food and head are at diff. position )
        if(food.xCoord == body[0].xCoord && food.yCoord == body[0].yCoord){

            body[length] = Point(body[length-1].xCoord, body[length-1].yCoord);
            length++;
        
        }

        return true;

    }
};


// Creating anotheR Class for Score Board : 
class Board{
    Snake *snake;
    const char SNAKE_BODY = 'O';
     
    Point food;
    const char FOOD = 'o';
    int score;

public:
    Board(){ //constructor for board class to initialise food, snake and initial score
        spawnFood();
        snake = new Snake(10,10);
        score = 0; 
    }

    ~Board(){
        delete snake;
    }

    //member function to fetch current score : 
    int get_score(){
        return score;
    }

    
    //to make a random point on screen 
    void spawnFood(){ 
        int x = rand() % console_width; // rand is a predefined function used to generate random numbers.
        int y = rand() % console_height; //here this member function is used to generate a number less tha console height/length
        
        food = Point(x, y); //initialising food 
    }

    void displayCurrentScore(){
        goto_XY(console_width/2,0);
        cout<<"Current Score : "<< score;
    }

    void goto_XY(int x, int y){ // member function that changes the position of cursor to (x,y) coordinate. 
        COORD coord; //this is a predefined class under windows.h
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
    }

    void draw(){
        system("cls"); // to clear console window befor drawing something in 
        
        for(int i=0;i<snake->getLength();i++){
            goto_XY(snake->body[i].xCoord, snake->body[i].yCoord);
            cout<<SNAKE_BODY;
        }
        
        // to spawn food 
        goto_XY(food.xCoord, food.yCoord);
        cout<<FOOD;

        displayCurrentScore();
    }

    bool update(){ // to check if game will continue or not 
       bool is_alive = snake->move(food);
        if(is_alive == false){
           return false;
        }

        if(food.xCoord == snake->body[0].xCoord && food.yCoord == snake->body[0].yCoord){
            score++;
            spawnFood();
        }
        
        return true;
    
    }

    void get_input(){
        if(kbhit()) //this member function returns bool value 
        {
            int key = getch();
            if(key == 'w' || key == 'W')
            {
                snake->changeDirection(direction_up);
            }
            else if(key == 'a' || key == 'A')
            {
                snake->changeDirection(direction_left);
            }
            else if(key == 's' || key == 'S')
            {
                snake->changeDirection(direction_down);
            }
            else if(key == 'd' || key == 'D')
            {
                snake->changeDirection(direction_right);
            }
        }
    }

};

int main(){
    srand(time(0));
    
    // calling in it screen to fetch console properties : 
    initScreen();
    Board *board = new Board();
    while(board->update()){
        board->get_input();
        board->draw();
        Sleep(100); // member function to change frame rate speed 
    }

    cout<<"Game over"<<endl;
    cout<<"Final score is : "<<board->get_score();  
    return 0;
}