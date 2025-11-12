#define ME1 6
#define ME2 7
#define MD1 8
#define MD2 9 

#define dir1 7

int velociadade 200;

void setup() {

  pinMode(ME1, OUTPUT);
  pinMode(ME2, OUTPUT);
  pinMode(MD1, OUTPUT);
  pinMode(MD2, OUTPUT);
  pinMode(dir1, OUTPUT);
  
  digitalWrite(dir1, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dir1, HIGH);
  analogWrite(ME1, velocidade);
  analogWrite(ME2, velocidade);
  analogWrite(MD1, velocidade);
  analogWrite(MD2, velocidade);
  delay(3000);

  analogWrite(ME1, 0);
  analogWrite(ME2, 0);
  analogWrite(MD1, 0);
  analogWrite(MD2, 0);
  delay(1000);

  digitalWrite(dir1, LOW);
  analogWrite(ME1, velocidade);
  analogWrite(ME2, velocidade);
  analogWrite(MD1, velocidade);
  analogWrite(MD2, velocidade);
  delay(3000);

  analogWrite(ME1, 0);
  analogWrite(ME2, 0);
  analogWrite(MD1, 0);
  analogWrite(MD2, 0);
  delay(1000);

  analogWrite(ME1, velocidade);
  analogWrite(ME2, velocidade);
  analogWrite(MD1, 0);
  analogWrite(MD2, 0);
  delay(2000);

  analogWrite(ME1, 0);
  analogWrite(ME2, 0);
  analogWrite(MD1, velocidade);
  analogWrite(MD2, velocidade);
  delay(2000);
}
