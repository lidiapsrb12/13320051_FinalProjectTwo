
String data;
bool s = false;
char d;
int a;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(4800);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() > 0)
  {
    d = Serial.read();
    a = d;
    if(a != 10)
    {
      data += d;
    }
    else
    {
      Serial.println(data);
      data = "";
    }
    s = true;
  }
}
