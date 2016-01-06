String a = "rbfdmfwnfrp";
String b = "sork djaldm qothrdptj ejf dlrdmscofh xnr EJfdjwls gn tlvjfjgrp TmelTms ahrrhtlfh dnfrh dlTdmf Eo dkqlsms wjfjsrjf djEJGrp ajrsk gkau skfmf qhdkTejfoTwl. ";

void setup() {
  Keyboard.begin();
  //content.trim();
  
  delay(1000);
   
  startMusic();
  open_TextEdit();
  setcontent(a,200);
  setcontent(b,33);
}

void loop() {}

void startMusic(){
  open_Spotlight();
  delay(1000);
  Keyboard.print("itunes");
  delay(1000);
  Keyboard.write(KEY_RETURN);
  delay(1000);
  Keyboard.print(" ");
}


void open_TextEdit(){
  open_Spotlight();
  delay(1000);
  Keyboard.print("textedit");
  delay(1000);
  Keyboard.write(KEY_RETURN);
  delay(1000);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.write(KEY_ESC);
  delay(1000);
  cmd_n();
  delay(1000);
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


//void setcontent(int milDelay){
//  for(int i = 0 ; i < content.length() ; i++){
//    String innnerContent = content[i];
//     Keyboard.print(innnerContent);
//      delay(milDelay);
//    for(int i = 0 ; i < innnerContent.length() ; i++){
//      Keyboard.write(innnerContent[i]);
//      delay(milDelay);
//    }
//    Keyboard.write(KEY_RETURN);
//  }
//}






