
 
void setup() {

  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void allLayer() {
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  }

void noLayer() {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  }

void rotate() {
  allLayer();
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(100);
  empty();
  //digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  empty();
  //digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  empty();
  //digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(100);
  empty();
  noLayer();  
  }

void fill() {

  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  }

void swirl() {

  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(6, HIGH);
  delay(50);
  }

void myName() {
  //Y
  digitalWrite(11, HIGH);
  //digitalWrite(2, HIGH);
 // digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(13, HIGH);
  delay(200);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(11, HIGH);
  delay(100);
  noLayer();
  empty();

  //O
  digitalWrite(11, HIGH);
 
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(13, HIGH);
  delay(200);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(11, HIGH);
  delay(100);
  noLayer();
  empty();

  //U
  digitalWrite(11, HIGH);

  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(13, HIGH);
  delay(200);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(11, HIGH);
  delay(100);
  noLayer();
  empty();

  //R
  digitalWrite(11, HIGH);
  
  
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  delay(100);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(13, HIGH);
  delay(200);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(11, HIGH);
  delay(100);
  noLayer();
  empty();

  //I
  digitalWrite(11, HIGH);
  //digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(13, HIGH);
  delay(200);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(11, HIGH);
  delay(100);
  noLayer();
  empty();
  }

void empty() {
  
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  }  

void createX() {
 // digitalWrite(2, HIGH);
 // digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(1000);
 
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(200);
  
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(200);
 
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(200);

  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(200);
  
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(200);

  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(200);
 
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(200);
  
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(200);
 
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(500);
}


void loop() {
  if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      { 
//FILL - UP AND DOWN
  case 'a':
digitalWrite(13,HIGH);
 delay(100);
 digitalWrite(12,HIGH);
 delay(100);
 digitalWrite(11,HIGH);
 delay(100);
 digitalWrite(10,HIGH);
 delay(100);
 digitalWrite(9,HIGH);
 delay(100);
 digitalWrite(8,HIGH);
 delay(100);
 digitalWrite(7,HIGH);
 delay(100);
 digitalWrite(6,HIGH);
 delay(100);
 digitalWrite(5,HIGH);
 delay(300);break;



//SWIRL - 1 LAYER EACH TIME
   case 'b':
digitalWrite(5,0);
 delay(100);
 digitalWrite(6,0);
 delay(100);
 digitalWrite(7,0);
 delay(100);
 digitalWrite(8,0);
 delay(100);
 digitalWrite(9,0);
 delay(100);
 digitalWrite(10,0);
 delay(100);
 digitalWrite(11,0);
 delay(100);
 digitalWrite(12,0);
 delay(100);
 digitalWrite(13,0);
 delay(500);break;


//SWIRL - 1 LAYER EACH TIME //X +
   case 'c':
 digitalWrite(13,LOW);
delay(50);
digitalWrite(12,HIGH);
delay(50);
digitalWrite(11,LOW);
delay(50);
digitalWrite(10,HIGH);
delay(50);
digitalWrite(9,HIGH);
delay(50);
digitalWrite(8,HIGH);
delay(50);
digitalWrite(7,LOW);
delay(50);
digitalWrite(6,HIGH);
delay(50);
digitalWrite(5,LOW);
delay(400);

digitalWrite(13,0);
digitalWrite(12,0);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(7,0);
digitalWrite(6,0);
digitalWrite(5,0);
delay(500);

digitalWrite(13,HIGH);
delay(50);
digitalWrite(12,LOW);
delay(50);
digitalWrite(11,HIGH);
delay(50);
digitalWrite(10,LOW);
delay(50);
digitalWrite(9,HIGH);
delay(100);
digitalWrite(8,LOW);
delay(50);
digitalWrite(7,HIGH);
delay(50);
digitalWrite(6,LOW);
//delay(100);
digitalWrite(5,HIGH);

delay(500);
digitalWrite(13,0);
digitalWrite(12,0);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(7,0);
digitalWrite(6,0);
digitalWrite(5,0);
delay(500);break;

//square
  case 'd': 
 digitalWrite(13,HIGH);
delay(50);
digitalWrite(12,HIGH);
delay(50);
digitalWrite(11,HIGH);
delay(50);
digitalWrite(10,HIGH);
delay(50);
digitalWrite(9,LOW);
delay(50);
digitalWrite(8,HIGH);
delay(50);
digitalWrite(7,HIGH);
delay(50);
digitalWrite(6,HIGH);
delay(50);
digitalWrite(5,HIGH);
delay(400);

digitalWrite(13,0);
digitalWrite(12,0);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(7,0);
digitalWrite(6,0);
digitalWrite(5,0);
delay(500);break;


//SWIRL - ALL LAYERS AT ONCE
  case 'e':
 allLayer();
 swirl();
 delay(400);
 empty();
 noLayer();
 delay(10);
 allLayer();
 swirl();
 delay(400);
 empty();
 noLayer();
 delay(10);
 allLayer();
 swirl();
 delay(400);
 empty();
 noLayer();
 delay(10);
 allLayer();
 swirl();
 delay(400);
 empty();
 noLayer();
 delay(10);break;

//row wise round
case 'f': 
  // put your main code here, to run repeatedly:
 //1
 digitalWrite(13,HIGH);
//delay(100);
digitalWrite(12,HIGH);
//delay(100);
digitalWrite(11,HIGH);
delay(200);
digitalWrite(13,0);
digitalWrite(12,0);
digitalWrite(11,0);
 digitalWrite(9,HIGH);
//delay(100);
digitalWrite(8,HIGH);
//delay(100);
digitalWrite(10,HIGH);
delay(200);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(10,0);

 digitalWrite(7,HIGH);
//delay(100);
digitalWrite(6,HIGH);
//delay(100);
digitalWrite(5,HIGH);
delay(500);
digitalWrite(7,0);
digitalWrite(6,0);
digitalWrite(5,0);
delay(200);
//2
digitalWrite(5,HIGH);
//delay(100);
digitalWrite(6,HIGH);
//delay(100);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(7,0);
 digitalWrite(8,HIGH);
//delay(100);
digitalWrite(9,HIGH);
//delay(100);
digitalWrite(10,HIGH);
delay(200);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,0);

 digitalWrite(11,HIGH);
//delay(100);
digitalWrite(12,HIGH);
//delay(100);
digitalWrite(13,HIGH);
delay(500);
digitalWrite(11,0);
digitalWrite(12,0);
digitalWrite(13,0);
delay(200);
//3
digitalWrite(13,HIGH);
//delay(100);
digitalWrite(10,HIGH);
//delay(100);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(13,0);
digitalWrite(10,0);
digitalWrite(7,0);
 digitalWrite(12,HIGH);
//delay(100);
digitalWrite(9,HIGH);
//delay(100);
digitalWrite(6,HIGH);
delay(200);
digitalWrite(12,0);
digitalWrite(9,0);
digitalWrite(6,0);

 digitalWrite(11,HIGH);
//delay(100);
digitalWrite(8,HIGH);
//delay(100);
digitalWrite(5,HIGH);
delay(200);
digitalWrite(11,0);
digitalWrite(8,0);
digitalWrite(5,0);
delay(200);
//4
digitalWrite(11,HIGH);
//delay(100);
digitalWrite(8,HIGH);
//delay(100);
digitalWrite(5,HIGH);
delay(200);
digitalWrite(11,0);
digitalWrite(8,0);
digitalWrite(5,0);
 digitalWrite(12,HIGH);
//delay(100);
digitalWrite(9,HIGH);
//delay(100);
digitalWrite(6,HIGH);
delay(200);
digitalWrite(12,0);
digitalWrite(9,0);
digitalWrite(6,0);

 digitalWrite(13,HIGH);
//delay(100);
digitalWrite(10,HIGH);
//delay(100);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(13,0);
digitalWrite(10,0);
digitalWrite(7,0);break;

//NAME COMES UP
 case 'g':
myName();
delay(500);

//ROTATING PANE - ALL LAYERS
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
delay(500);break;


case 'h':
myName();
delay(500);

//ROTATING PANE - ALL LAYERS
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
delay(500);break;






 default : break;
      }
      Serial.println(data);
   }
   delay(50);
}








