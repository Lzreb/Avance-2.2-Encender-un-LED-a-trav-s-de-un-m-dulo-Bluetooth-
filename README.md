![header](https://64.media.tumblr.com/57730cddb7c5354d14f47029614d8ce3/56878bd0aea7b65b-e3/s2048x3072/e46ed994db71142885bdef794ba83824519eeb89.pnj)

# Encender un LED a través de un módulo Bluetooth 


![divider](https://64.media.tumblr.com/a43db1e911e8107f35119622df772e52/b15d23a765658ea4-3d/s1280x1920/3c7f3767d66cc0710d12a0e5609dcc25abad3103.pnj)


## Introducción
- En esta práctica aprendimos a utilizar un módulo Bluetooth HC-05 conectado a un Arduino UNO para establecer una comunicación inalámbrica. La idea fue aprender cómo se puede enviar y recibir información entre una computadora y el Arduino por medio del Bluetooth. También aprendimos para qué sirven las conexiones VCC, GND, TX y RX, y por qué es importante realizar correctamente las conexiones del módulo. Con esta práctica pudimos entender de una manera más sencilla cómo funciona la comunicación inalámbrica y cómo podemos utilizarla en proyectos con Arduino.

![divider](https://64.media.tumblr.com/a43db1e911e8107f35119622df772e52/b15d23a765658ea4-3d/s1280x1920/3c7f3767d66cc0710d12a0e5609dcc25abad3103.pnj)

## Materiales

- Se necesitan los siguientes materiales para llevar acabo este proyecto:

    - 1 Arduino UNO R3 

    - 2 Resistencias (una de 1,000 k y otra de 2,000 k) 

    - 1 Módulo de Bluetooth HC-05 

    - Jumpers 

![divider](https://64.media.tumblr.com/a43db1e911e8107f35119622df772e52/b15d23a765658ea4-3d/s1280x1920/3c7f3767d66cc0710d12a0e5609dcc25abad3103.pnj)
## Circuito y Conexiones

Figura 1.1

Diagrama general de conexiones .


![TinkerCAD](https://cdn.discordapp.com/attachments/1224728869706403864/1556519292650917928/WhatsApp_Image_2026-10-04_at_3.56.43_PM.jpeg?backend=b2&ex=6ac4750e&is=6ac3238e&hm=58408d25eaf759f1c60708f953fa553076c365b0b1526d36e96b48fd4c204b03&)

- En este diagrama podemos ver las conexiones generales realizadas en el circuito. Aquí realmente nos enfocaremos en 4 de los 6 "puertos" que tiene el HC-05 o bien el módulo bluetooth. 

    - VCC: Voltaje, en este caso 5V. 

    - GND: Ground o tierra. 

    - TXD: El módulo manda señales o comandos. 

    - RXD: El módulo recibe señales o comandos. 

- Tanto el TXD como el RXD están conectados a diferentes pines del Arduino pues aplicamos un sistema de "maestro-esclavo" entre ellos donde el Arduino es, por lo general, el maestro y el módulo Bluetooth el esclavo, sin embargo, como ocupamos que este módulo reciba y regrese señales o comandos conectamos ambos como "individuales". 

- También podemos ver que hay 2 resistencias conectadas al mismo puerto, esto para evitar que el módulo se queme. Esto debido a que el módulo en sí trabaja con 3.3 V, pero cuenta con un regulador interno a excepción del puerto RXD por lo que agregamos una resistencia aproximada de 3,000 K para que solo reciba cerca de 3.3 V.  


![divider](https://64.media.tumblr.com/a43db1e911e8107f35119622df772e52/b15d23a765658ea4-3d/s1280x1920/3c7f3767d66cc0710d12a0e5609dcc25abad3103.pnj)
## Código

Figura 2.1

Programación del circuito 

![Código](https://cdn.discordapp.com/attachments/1224728869706403864/1556519937961496656/image.png?backend=b2&ex=6ac475a7&is=6ac32427&hm=8cfc9cffc610e5ece5d0c977b17529fc3e228a970989fcc4306eccc8550a2b02&)

- Primero agregamos la función #include para incluir la galería <SoftwareSerial.h>, que permite que la comunicación bluetooth se realice a través de un serial. Después en la línea seis del código declaramos dentro de la variable miBluetooth los pines que están conectados al TX y RX del módulo bluetooth y en la línea ocho declaramos la variable llamada “datoRecibido” por medio de la función char, la cual nos permite almacenar una sola letra (la cual necesitaremos más adelante para el serial). 

- Dentro de void setup (ponemos lo que queremos que solo se realice una vez) declaramos el LED interno del Arduino como un OUTPUT, le indicamos al sistema que inicie la comunicación Bluetooth y el Serial, además le ordenamos que inserte el mensaje de la línea 16 en el serial.  

- En void loop agregamos un condicional if, en el que le pedimos que revise si hay datos nuevos por medio de miBluetooth.available, de ser así lo tendrá que leer. En el siguiente if le decimos que si el comando recibido es “A” entonces deberá encender el LED y después imprimir el mensaje de la línea 27. Por último, dentro de else if le decimos que si el comando recibido es igual a “B” apague el LED y después imprima el mensaje de la línea 32.


![divider](https://64.media.tumblr.com/a43db1e911e8107f35119622df772e52/b15d23a765658ea4-3d/s1280x1920/3c7f3767d66cc0710d12a0e5609dcc25abad3103.pnj)
## Demo

- El siguiente link te redirige a un video demostrativo del circuito.

- [Demo](https://drive.google.com/file/d/1h9QicwIdAcFS9n9du_soSbw4U3YzTqxD/view?usp=sharing )

![divider](https://64.media.tumblr.com/a43db1e911e8107f35119622df772e52/b15d23a765658ea4-3d/s1280x1920/3c7f3767d66cc0710d12a0e5609dcc25abad3103.pnj)
## Conclusión

- En conclusión, esta práctica nos ayudó a entender cómo podemos usar Bluetooth para comunicarnos con un Arduino sin necesidad de estar conectados directamente a la computadora. Aprendimos a conectar correctamente el módulo HC-05 y a enviar comandos para controlar un LED. También entendimos la función de los pines TX y RX y el módulo Bluetooth HC-05.


![divider](https://64.media.tumblr.com/a43db1e911e8107f35119622df772e52/b15d23a765658ea4-3d/s1280x1920/3c7f3767d66cc0710d12a0e5609dcc25abad3103.pnj) 
## Colaboradores

- [@AtlasDaKiwi](https://github.com/AtlasDaKiwi) (Atlas)
- [@val130613](https://github.com/val130613) (Valeria)
- [@arianacastt](https://github.com/arianacastt)  (Ariana)
- [@Lzreb](https://github.com/Lzreb) (Rebeca)
