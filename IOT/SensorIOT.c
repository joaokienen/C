// IOT project fixed together with prototic with Tinkercad;

void setup() // Função de inicialização

{
  
  Serial.begin(9000); // Tempo de Atualização
  pinMode(2, INPUT); // Mantém o sinal do Sensor conectado na porta '2'
  pinMode(7, OUTPUT); // Mantém o sinal da Led verde conectada na porta '7'
  pinMode(8, OUTPUT); // Mantém o sinal da Led vermelha conectada na porta'8'
  
}

void loop() // Função para realização de ações
  
{
  
  int sensor; // Criação de variável
  
  delay(1000); // Ativa um breve tempo de espera
  sensor = digitalRead(2); // Realiza a leitura do campo do sensor
  
  if (sensor==HIGH) { // Se o sensor for ativado:
    Serial.println("Alerta de movimento!"); // Exibe a mensagem no terminal,
    digitalWrite(7, LOW); // Desliga o Led verde,
    digitalWrite(8, HIGH); // Ativa o Led vermelho
  } else { // Se o sensor não estiver ativado:
    Serial.println("Ambiente seguro!"); // Exibe a mensagem no terminal,
    digitalWrite(7, HIGH); // Ativa o Led verde,
    digitalWrite(8, LOW); // Desliga o Led vermelho
}
}

// https://www.tinkercad.com/things/7eIxHc4QR70-brave-kasi/editel?sharecode=E7_QNCOFqj6uCv7Xpg7IR3cJlxI-s4EDIieL1Hw5UOQ
