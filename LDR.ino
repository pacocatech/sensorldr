/**
 * Criado por Paçoca Tech
 * 
 * Youtube: https://www.youtube.com/channel/UCW6OP5j28zFsnKxpQ2v9CsA
 * Instagram: http://instagram.com/pacocatech
 * Github: http://github.com/pacocatech
 * E-mail: pacocatech@gmail.com
 * 
 * 
 * Leitura básica do sensor LDR
 */
void setup() {
  //iniciando o monitor serial
  Serial.begin(9600);

  //definindo que iremos utilizar a porta analógica 1 para leitura dos dados do sensor
  pinMode(A1, INPUT);
}

void loop() {

  //efetuamos a leitura do sensor adicionado na porta A1
  int valorSensor = analogRead(A1);

  //Escrevemos o valor do sensor no monitor serial
  Serial.println(valorSensor);
  
}
