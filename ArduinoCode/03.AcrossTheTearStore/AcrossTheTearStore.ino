/*

눈물가snsanfrfwlskdicnfrn


*/
#define OSX 0
#define WINDOWS 1
#define UBUNTU 2
/////////////////////////////////////////////////
//setting //////////////////////////////////////
//first setting : choose your OS
int flatform = OSX;
// set System delay
int system_delay = 1000;
/////////////////////////////////////////////////
///////////////////////////////////////////////// 

// var init
byte ctrlKey = 0;
int program_count=0;


/////////////////////////////////////////////////
void setup(){
      Keyboard.begin();
      setOS(OSX);// set First!!
      delay(1000);
      openProgram("textedit");
      delay(system_delay);
      cmd_n();
      delay(system_delay);
      change_lang();
      delay(system_delay);
      typeStringln("snsanfrkrpfmfwlskdicnfrn.",500);
      typeStringln("",300);
      typeStringln("",300);
      //moveCursor(1,6,200);
      //deleteString(2,1000);
      //typeString("wjsur",500);
      //goEnd(1000);
      typeStringln("dnflsms akwnqhau tjfhdml ahrthfldp",100);
      typeStringln("wnajslfmf aksemfdjTwl",100);
      typeStringln("       dhfpswl",500);
      typeStringln("  qkek",100);
      typeStringln("      rlfls",100);
      typeStringln("rnen",100);
      typeStringln("dlfjgrp whgdkgksms rjtemfdmf wksEmR wlqdjsjgdjTek",100);
      typeStringln("",300);
      typeStringln("",300);
      typeStringln("tjfhdml ahrthfldp thsdmf WLffj sjgrh dnflsms",100);
      typeStringln("rjeogks gutqkekrdp eogkdgkrl dnlgks",100);
      typeStringln("qnemfjdns qlaudcjfja",100);
      typeStringln("",300);
      typeStringln("",300);
      typeStringln("xodiddmf wlclrp aksemfdj shdmfdmf rhqorgkrp gkwk",300);
      typeStringln("rmfjgrp tptkddp rkwkd dkfmaekdns ahtjflfmf aksemfwk",300);
      typeStringln("",300);
      typeStringln("",300);
      typeStringln("ekwlagkemt akffkrksms ekfqlc dkfotj",300);
      typeStringln("tjfhfmf ehdwjscjfja wkRNaks enlwlqdjTwl",300);
      typeStringln("",300);
      typeStringln("",300);
      typeStringln("...........",100);
      typeStringln("rmflrh",300);
      typeStringln("      dlfmfxpaus",300);
      typeStringln("      tltlrkrrkr ekffkwlejs djfrnfemfdl",300);
      typeStringln("eks gksqjs akssktj gnghlgksms vywjddmfh gpdjwuTek",300);
      typeStringln("   ",300);
      typeStringln("   ",300);
      typeStringln("akcl Tmfahdjqtsms rjtemfdmf Tkgdk shgdms rhanftkddptj",300);
      typeStringln("TMfah dlTsms rjtdl dlTsk ckwdkqhau smRlsms rhehrcjfja",300);
      typeStringln("Rhcemfdms Ekddp rnlfmf eorh doekfdkgkek rmaqkd tlaemfjdgowlrhs goTek",300);
      typeStringln("",100);
      typeStringln("",100);
      typeStringln("",100);
      typeStringln("",100);
      typeStringln("",100);
      typeStringln("",100);
      typeStringln("",100);
      typeStringln("dPQmrleh gofk xjd qls whddl dnldp dhffushgrh qkfkqhaus",100);
      typeStringln("snsehdwkcjfja emfRMfgek wmdqkfgo qjflsms rjtemf",100);
      typeStringln("",100);
      typeStringln("",100);
      typeStringln("chfhrdmfh rldjrksms doqjffpfmf tkazlrh skfdkrkejs tork",100);
      typeStringln("dlq thrdp emfdjdhk snsrkdp aowglsek",100);
      typeStringln("dnflrk snsanf rkrpfmf wlskau sksnj rkwuTejs dlfrhq qlcRkfdml tkxkdcjfja",100);
      typeStringln("",1000);
      typeStringln("",1000);
      selectAllText();
      deleteString(1,100);
      change_lang();
      quitProgram(program_count);
      
}
/////////////////////////////////////////////////

void loop(){}

void typeString(String str, int typedelay){
	for(int i = 0 ; i < str.length() ; i++){
     Keyboard.write(str[i]);
     delay(typedelay);
    }
}
void typeStringln(String str, int typedelay){
	for(int i = 0 ; i < str.length() ; i++){
     Keyboard.write(str[i]);
     delay(typedelay);
    }
    Keyboard.write(KEY_RETURN);
}
void deleteString(int count , int delete_delay){
	for(int i=0; i<count; i++){
	    Keyboard.write(KEY_BACKSPACE);
		delay(delete_delay);
	}
}
void goEnd(int _delay){
	Keyboard.press(ctrlKey);
	Keyboard.write(KEY_RIGHT_ARROW);
	delay(system_delay);
	Keyboard.releaseAll();
	delay(_delay);
}
void moveCursor(int direction, int count, int move_delay){
	switch (direction) {
	    case 0:
	      // front
	      for(int i=0; i<count; i++){
	          Keyboard.write(KEY_RIGHT_ARROW);
	          delay(move_delay);
	      }
	      break;
	    case 1:
	      // backword
	      for(int i=0; i<count; i++){
	          Keyboard.write(KEY_LEFT_ARROW);
	          delay(move_delay);
	      }
	      break;
	}
}
void selectAllText(){
	Keyboard.press(ctrlKey);
	Keyboard.write('A');
	delay(system_delay);
	Keyboard.releaseAll();
	delay(system_delay);
}
void  quitProgram(int program_count){// count - 카운트할 프로그램의 갯수
// 프로그램을 키는 함수를 동작할떄마다 전역변수의 프로그램 카운터 변수를 증가시켜서 프로그램끄는 방법을설정
// 순서에 따라서 배열의 인덱스를 설정하면될듯 아직 미구현
	for(int i=0; i< program_count;i++){
	    Keyboard.press(ctrlKey);
	    Keyboard.press('Q');
	    delay(system_delay);
	    Keyboard.releaseAll();
	}
}
void  openProgram(String program_name){
	switch (flatform) {
	    case OSX: 
	     	openSpotlight();
	      	break;
	    case WINDOWS: 
	    	openRun();
	      	break;
	    case UBUNTU: 
	    	//미구현 (cd ./ cd rocate/rocate/
	      	break;
	}
    delay(system_delay);
	Keyboard.print(program_name);
    delay(system_delay);
	Keyboard.write(KEY_RETURN);
	program_count++;
}
void openSpotlight(){
 	Keyboard.press(KEY_LEFT_CTRL);
 	Keyboard.print(" ");
 	Keyboard.releaseAll();
}
void openRun(){
	Keyboard.press(KEY_LEFT_GUI);// windows key
 	Keyboard.write('R');
 	Keyboard.releaseAll();
}
void setOS(int flatform){
	switch (flatform) {
	    case OSX: 
	      ctrlKey = KEY_LEFT_GUI;
	      break;
	    case WINDOWS: 
	      ctrlKey = KEY_LEFT_CTRL;
	      break;
	    case UBUNTU: 
	      ctrlKey = KEY_LEFT_CTRL;
	      break;
	}
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

