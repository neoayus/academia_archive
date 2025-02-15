// updating time every second 
setInterval(updateClock,1000) ;

// NEW CODE 
function updateClock(){
 //setting up variables 
   var time = new Date() ; 
   hour = time.getHours() ; 
   min = time.getMinutes() ;
   sec = time.getSeconds() ; 
   mer = "AM" ; 

 //setting current time ; 
   var current_time = `${hour}:${min}:${sec} ${mer}` ;

 //setting  time for 12 hour format 
   if ( hour >= 12){
      if(hour > 12){
         hour -= 12 ; 
         mer = "PM" ;
      }else if(hour == 0){
         hour = 12; 
         mer = "AM" ;
      }
   }

 //updating HTML : 
   let clock = document.querySelector("#time") ; 
   clock.innerHTML = current_time ; 
}

