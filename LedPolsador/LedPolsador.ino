/**********************************************************************************
**                                                                               **
**                               Els 5 priemrs progràmes                         **
**                                     Ledpolsador                                     **
**  NOM : Jordi Pujlreu Sala                                     DATA: 23/1/17   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup(){
pinMode(2, OUTPUT);
pinMode(4, INPUT);
}

//********************************* loop ******************************************
void loop(){
if(digitalRead(4)){
  digitalWrite(2, HIGH);
}else{
digitalWrite(2, LOW);
}
}

//******************************* funcions ****************************************
