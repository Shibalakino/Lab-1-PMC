// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  
  line();
  dot();
  dot();
  dot();
  
  line();
  line();
  line();

  
  dot();
  dot();

  
  
}

void dot() //red
{
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(2, LOW);
  wait();
}
void line() //green
{
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  wait();
}

void wait()
{
  delay(1000);
}


