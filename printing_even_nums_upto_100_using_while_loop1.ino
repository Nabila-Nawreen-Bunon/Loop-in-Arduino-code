// C++ code
//
void setup()
{
  Serial.begin(9600);
  int i=1;
  while(i<=100){
    if(i%2==0){
      Serial.println(i);
    }else{Serial.println("");}
    i++;
  }
}

void loop()
{
 
}