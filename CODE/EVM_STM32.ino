#include <LiquidCrystal.h>
const int rs = PB12, en = PB13, d4 = PB14, d5 = PB15, d6 = PA8, d7 = PA9;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define S1 PB11
#define S2 PB10
#define S3 PB1
#define S4 PB0
#define S5 PB8
#define S6 PB9
#define S7 A5
#define S8 A4
#define S9 A3
#define S10 A2
#define S11 A1
#define S12 A0
#define S13 PA15
#define S14 PB3
#define S15 PB4
#define S16 PA11
#define ENA PB5

int vote1=0;
int vote2=0;
int vote3=0;
int vote4=0;
int vote5=0;
int vote6=0;
int vote7=0;
int vote8=0;
int vote9=0;
int vote10=0;
int vote11=0;
int vote12=0;
int vote13=0;
int vote14=0;
int vote15=0;
int vote16=0;
int total=0;

void setup()
{
pinMode(S1, INPUT_PULLUP);
pinMode(S2,INPUT_PULLUP);
pinMode(S3,INPUT_PULLUP);
pinMode(S4,INPUT_PULLUP);
pinMode(S5,INPUT_PULLUP);
pinMode(S6,INPUT_PULLUP);
pinMode(S7,INPUT_PULLUP);
pinMode(S8,INPUT_PULLUP);
pinMode(S9,INPUT_PULLUP);
pinMode(S10,INPUT_PULLUP);
pinMode(S11,INPUT_PULLUP);
pinMode(S12,INPUT_PULLUP);
pinMode(S13,INPUT_PULLUP);
pinMode(S14,INPUT_PULLUP);
pinMode(S15,INPUT_PULLUP);
pinMode(S16,INPUT_PULLUP);
pinMode(ENA,INPUT_PULLUP);

digitalWrite(S1, LOW);
digitalWrite(S2, LOW);
digitalWrite(S3, LOW);
digitalWrite(S4, LOW);
digitalWrite(S5, LOW);
digitalWrite(S6, LOW);
digitalWrite(S7, LOW);
digitalWrite(S8, LOW);
digitalWrite(S9, LOW);
digitalWrite(S10, LOW);
digitalWrite(S11, LOW);
digitalWrite(S12, LOW);
digitalWrite(S13, LOW);
digitalWrite(S14, LOW);
digitalWrite(S15, LOW);
digitalWrite(S16, LOW);
digitalWrite(ENA, LOW);


lcd.begin(16, 2);
lcd.print(" Electronic ");
lcd.setCursor(0,1);
lcd.print(" Voting Machine ");
delay(1000);
lcd.clear();

}
void loop(){
  
if (digitalRead(S1) == HIGH){
    castVote(1);

  }
  else if (digitalRead(S2) == HIGH){
    castVote(2);
    
  }
  else if (digitalRead(S3) == HIGH){
    castVote(3);
    
  }
  else if (digitalRead(S4) == HIGH){
    castVote(4);

  }
  else if (digitalRead(S5) == HIGH){
    castVote(5);

  }
  else if (digitalRead(S6) == HIGH){
    castVote(6);

  }
  else if (digitalRead(S7) == HIGH){
    castVote(7);

  }
  else if (digitalRead(S8) == HIGH){
    castVote(8);

  }
  else if (digitalRead(S9) == HIGH){
    castVote(9);

  }
  else if (digitalRead(S10) == HIGH){
    castVote(10);

  }else if (digitalRead(S11) == HIGH){
    castVote(11);

  }else if (digitalRead(S12) == HIGH){
    castVote(12);

  }else if (digitalRead(S13) == HIGH){
    castVote(13);

  }else if (digitalRead(S14) == HIGH){
    castVote(14);

  }else if (digitalRead(S15) == HIGH){
    castVote(15);

  }else if (digitalRead(S16) == HIGH){
    castVote(16);

  }
  else if (digitalRead(ENA) == HIGH){
    castVote(17);
  }
  }

void castVote(int candidateNumber) {
 switch (candidateNumber) {
    case 1:
      vote1++;
     // lcd.print(vote1);
     // delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 1!");
      delay(5000);
      lcd.clear();
      break;
      
      case 2:
      vote2++;
      //lcd.print(vote2);
      //delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 2!");
      delay(5000);
      lcd.clear();
      break;
      
      case 3:
      vote3++;
      //lcd.print(vote3);
    //  delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 3!");
      delay(5000);
      lcd.clear();
      break;
      
      case 4:
      vote4++;
//      lcd.print(vote4);
  //    delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 4!");
      delay(5000);
      lcd.clear();
      break;
      
      case 5:
      vote5++;
//      lcd.print(vote5);
  //    delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 5!");
      delay(5000);
      lcd.clear();
      break;
      
      case 6:
      vote6++;
//      lcd.print(vote6);
  //    delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 6!");
      delay(5000);
      lcd.clear();
      break;
      
      case 7:
      vote7++;
//      lcd.print(vote7);
  //    delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 7!");
      delay(5000);
      lcd.clear();
      break;
      
      case 8:
      vote8++;
//      lcd.print(vote8);
  //    delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 8!");
      delay(5000);
      lcd.clear();
      break;
      
      case 9:
      vote9++;
//      lcd.print(vote9);
  //    delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 9!");
      delay(5000);
      lcd.clear();
      break;
      
      case 10:
      vote10++;
//      lcd.print(vote10);
  //    delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 10!");
      delay(5000);
      lcd.clear();
      break;
      
      case 11:
      vote11++;
//      lcd.print(vote11);
  //    delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 11!");
      delay(5000);
      lcd.clear();
      break;
      
      case 12:
      vote12++;
//      lcd.print(vote12);
  //    delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 12!");
      delay(5000);
      lcd.clear();
      break;
      
      case 13:
      vote13++;
 //     lcd.print(vote13);
   //   delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 13!");
      delay(5000);
      lcd.clear();
      break;
      
      case 14:
      vote14++;
//      lcd.print(vote14);
  //    delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 14!");
      delay(5000);
      lcd.clear();
      break;
      
      case 15:
      vote15++;
//      lcd.print(vote15);
  //    delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 15!");
      delay(5000);
      lcd.clear();
      break;
      
      case 16:
      vote16++;
//      lcd.print(vote16);
  //    delay(2000);
      lcd.begin(16, 2);
      lcd.print("Vote for");
      lcd.setCursor(0,1);
      lcd.print("Candidate 16!");
      delay(5000);
      lcd.clear();
      break;
      

      case 17:
      lcd.begin(16, 2);
      lcd.print("Candidate 1 :");
      lcd.setCursor(0,1);
      lcd.print(vote1);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 2 :");
      lcd.setCursor(0,1);
      lcd.print(vote2);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 3 :");
      lcd.setCursor(0,1);
      lcd.print(vote3);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 4 :");
      lcd.setCursor(0,1);
      lcd.print(vote4);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 5 :");
      lcd.setCursor(0,1);
      lcd.print(vote5);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 6 :");
      lcd.setCursor(0,1);
      lcd.print(vote6);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 7 :");
      lcd.setCursor(0,1);
      lcd.print(vote7);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 8 :");
      lcd.setCursor(0,1);
      lcd.print(vote8);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 9 :");
      lcd.setCursor(0,1);
      lcd.print(vote9);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 10 :");
      lcd.setCursor(0,1);
      lcd.print(vote10);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 11 :");
      lcd.setCursor(0,1);
      lcd.print(vote11);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 12 :");
      lcd.setCursor(0,1);
      lcd.print(vote12);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 13 :");
      lcd.setCursor(0,1);
      lcd.print(vote13);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 14 :");
      lcd.setCursor(0,1);
      lcd.print(vote14);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 15 :");
      lcd.setCursor(0,1);
      lcd.print(vote15);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print("Candidate 16 :");
      lcd.setCursor(0,1);
      lcd.print(vote16);
      delay(3000);
      lcd.clear();

      lcd.begin(16, 2);
      lcd.print(" TOTAL VOTES :");
      lcd.setCursor(0,1);
      lcd.print(vote1+vote2+vote3+vote4+vote5+vote6+vote7+vote8+vote9+vote10+vote11+vote12+vote13+vote14+vote15+vote16);
      delay(3000);
      lcd.clear();
      break;
 }

   //delay(10);
}
