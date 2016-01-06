//String a = "rbfdmfwnfrp";
//String b = "sork djaldm qothrdptj ejf dlrdmscofh xnr EJfdjwls gn tlvjfjgrp TmelTms ahrrhtlfh dnfrh dlTdmf Eo dkqlsms wjfjsrjf djEJGrp ajrsk gkau skfmf qhdkTejfoTwl. ";

void setup() {
  Keyboard.begin();
  //content.trim();
  
  delay(1000);
   
  startMusic();
  open_chrome_facebook();
  //setcontent(a,200);
  //setcontent(b,33);
}

void loop() {
  delay(1000);
  Keyboard.write('j');

}

void startMusic(){
  open_Spotlight();
  delay(1000);
  Keyboard.print("itunes");
  delay(1000);
  Keyboard.write(KEY_RETURN);
  delay(1000);
  Keyboard.print(" ");
  delay(3000);
}


void open_chrome_facebook(){
  open_Spotlight();
  delay(1000);
  Keyboard.print("chrome");
  delay(2000);
  Keyboard.write(KEY_RETURN);
  delay(2000);
  Keyboard.print("www.facebook.com");
  delay(500);
  Keyboard.write(KEY_RETURN);
  delay(2000); 
  change_lang();
  delay(1000);
  
  
}

void open_Spotlight(){
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.print(" ");
  Keyboard.releaseAll();
}

void cmd_n(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('n');
  Keyboard.releaseAll();
}

void change_lang(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.print(" ");
  Keyboard.releaseAll();
}


void setcontent(String content , int milDelay){
  for(int i = 0 ; i < content.length() ; i++){
     Keyboard.write(content[i]);
     delay(milDelay);
    }
    Keyboard.write(KEY_RETURN);
}



