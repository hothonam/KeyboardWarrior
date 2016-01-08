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
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);
      typeString("dkssudgktpdy!",20);//
}
/////////////////////////////////////////////////

void loop(){
	
}
void typeString(String str, int typedelay){
	for(int i = 0 ; i < str.length() ; i++){
     Keyboard.write(str[i]);
     delay(typedelay);
    }
    Keyboard.write(KEY_RETURN);
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
