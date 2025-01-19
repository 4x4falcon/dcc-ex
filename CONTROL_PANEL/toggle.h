// From UKBloke
// https://discord.com/channels/713189617066836079/873794422993727568/925686306007289867
//
// This is better programatically

SEQUENCE(42)  //monitor pb 32 and toggle turnout 100 sl7 ltc end summit passing
  DELAY(1000)
  AT(32)
  IFNOT(85)   //IF CLOSED 85 WILL BE OFF
    THROW(100)
    FOLLOW(42)
  ENDIF 
  CLOSE(100)
  FOLLOW(42)
  DONE

SEQUENCE(43)  //monitor pb 33 and toggle turnout 100 sl7 ltc end summit passing
  DELAY(1000)
  AT(33)
  IFNOT(86)   //IF CLOSED 85 WILL BE OFF
    THROW(101)
    FOLLOW(43)
  ENDIF 
  CLOSE(101)
  FOLLOW(43)
  DONE




// From SpringLake
// https://discord.com/channels/713189617066836079/873794422993727568/925543643790606387
// 

SEQUENCE(42)  //monitor pb 32 and toggle turnout 100 sl7 ltc end summit passing
  AT(32)
  IFNOT(85)   //IF CLOSED 85 WILL BE OFF
    THROW(100)
  ENDIF 
  IF(85)      //IF THROWN 85 WILL BE ON
    CLOSE(100)
  ENDIF   
  DELAY(1000)
  FOLLOW(42)
  DONE

SEQUENCE(43)  //monitor pb 33 and toggle turnout 101 sl6 SL  end summit passing
  AT(33)
  IFNOT(86)   //IF CLOSED 86 WILL BE OFF
    THROW(101)
  ENDIF 
  IF(86)      //IF THROWN 86 WILL BE ON
    CLOSE(101)
  ENDIF   
  DELAY(1000)
  FOLLOW(43)
  DONE


//
// this part controls the leds on the control panel
//

//light panel for servo 100
ONTHROW(100)  // When servo turnout 100 (summit east) is thrown,
   THROW(450)  // turn on pannel led 
   DELAY(100)
   LATCH(85)  //mark thrown
   DONE

//UNlight panel for servo 100
ONCLOSE(100)  // When servo turnout 100 (summit east) is CLOSED
  CLOSE(450)  // turn off pannel led 
  DELAY(100)
  UNLATCH(85)  //mark closed
  DONE

//light panel for servo 101
ONTHROW(101)  // When servo turnout 101 (summit west) is thrown,
  THROW(451)  // turn on pannel led 
  DELAY(100)
  LATCH(86)   //mark thrown
  DONE

//UNlight panel for servo 101
ONCLOSE(101)  // When servo turnout 101 (summit west) is CLOSED
  CLOSE(451)  // turn off pannel led 
  DELAY(100)
  LATCH(86)   //mark closed
  DONE
