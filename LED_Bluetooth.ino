#include <SoftwareSerial.h>

// Configura los pines de comunicación Bluetooth: RX (pin 2), TX (pin 3)
// Conecta el TX del módulo Bluetooth al pin 2 del Arduino
// Conecta el RX del módulo Bluetooth al pin 3 del Arduino
SoftwareSerial miBluetooth(2, 3); 

char datoRecibido; // Variable para guardar el caracter enviado desde el celular

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Configura el LED integrado como salida
  
  miBluetooth.begin(9600);      // Inicia la comunicación con el módulo Bluetooth
  Serial.begin(9600);           // Inicia la comunicación con el Monitor Serie de la computadora
  
  Serial.println("Sistema listo. Esperando comandos por Bluetooth...");
}

void loop() {
  // Verifica si hay datos disponibles provenientes del Bluetooth
  if (miBluetooth.available() > 0) {
    datoRecibido = miBluetooth.read(); // Lee el caracter recibido
    
    // Si recibe una 'A', enciende el LED y avisa a la computadora
    if (datoRecibido == 'A') {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("Comando 'A' recibido: LED Encendido");
    }
    // Si recibe una 'B', apaga el LED y avisa a la computadora
    else if (datoRecibido == 'B') {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("Comando 'B' recibido: LED Apagado");
    }
  }
}