function updateTime(){
 // getting time ; 
   let time = new Date() ;  
   let hour = time.getHours() ; 
   let min = time.getMinutes() ; 
   let sec = time.getSeconds() ; 
   let meridian = hour>=12? "PM" : "AM" ; 
   
 //setting time according to 12hour clock ; 
   if(hour>=12){
      if(hour == 12){
         hour = 0 ; 
      }else if(hour > 12){
         hour = hour-12 ;
      }
   }

 // fixing glitch  
   hour = hour<10? '0'+ hour : hour ; 
   min = min<10? '0'+ min : min ; 
   sec = sec<10? '0'+ sec : sec ; 

 // updating time ;
   var current_time = `${hour}:${min}:${sec} ${meridian}` ; 
   console.log(current_time); 
   
 //showing time on the webpage ; 
   var clock = document.querySelector("#clock") ; 
   clock.innerHTML = current_time ; 
}


// updating time everySecond. 
setInterval(updateTime,1000) ; 