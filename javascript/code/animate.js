/*
External JavaScript
*/

$(document).ready(function() {   // Ruff & Reddy

  let direction = "right";
  let leftOffset = 50;
  let leftOffsetR = leftOffset + 200;
  let topOffset = 50;
  let topOffsetB = topOffset +200;

  $("#ruff_and_reddy").offset({ left: leftOffset, top: topOffset });
  
  let animateSquare = function () {
      
      switch(direction) {
      
      case "right":    
      $("#ruff_and_reddy").offset({ left: leftOffset });
      leftOffset++;
      if (leftOffset > 250) {
        leftOffset = 50;
        direction = "down";
      }
      break;
           
      case "down":
      $("#ruff_and_reddy").offset({ top: topOffset });
      topOffset = topOffset + 4;  // speed up down trip!
      if (topOffset > 250) {
        topOffset = 50;
        direction = "left";
      }
      break;
      
      case "left":
      $("#ruff_and_reddy").offset({ left: leftOffsetR });
      leftOffsetR--;
      if (leftOffsetR < 50) {
        leftOffset = 50;
        leftOffsetR = leftOffset + 200;
        direction = "up";
      }
      break;
    
      case "up":
      $("#ruff_and_reddy").offset({ top: topOffsetB });
      topOffsetB--;  
      if (topOffsetB < 50) {
        topOffset = 50;
        topOffsetB = topOffset + 200;  
        direction = "right";
      } 
      break;
              
      } // end switch
  };  // end animate function

  setInterval(animateSquare, 15);
  
});
