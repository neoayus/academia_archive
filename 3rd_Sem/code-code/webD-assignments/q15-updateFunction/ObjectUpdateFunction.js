// Constructor function to create Employee object
function Employee(name, age, salary, position) {
    this.name = name;
    this.age = age;
    this.salary = salary;
    this.position = position;
    
    // Method to update the salary
    this.updateSalary = function(newSalary) {
        this.salary = newSalary;
        console.log(`The new salary of ${this.name} is ${this.salary}`);
    };

    // Method to display employee details
    this.details = function() {
        return `${this.name}, age ${this.age}, holds the position of ${this.position} and earns a salary of ${this.salary}.`;
    };
}

// Creating an employee object
let emp1 = new Employee("Alice", 30, 50000, "Software Engineer");

console.log(emp1.details()); 

// Updating the salary
emp1.updateSalary(60000);

console.log(emp1.details());  
