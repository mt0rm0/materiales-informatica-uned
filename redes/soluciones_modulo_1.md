# Soluciones a los problemas del libro de texto
# Módulo 1: Introducción a las redes y comunicaciones


## Índice <a name="indice"></a>

1. [Tema 1. Introducción](#tema1)
2. [Tema 2. Modelos de redes](#tema2)


## Tema 1. Introducción <a name="tema1"></a>
<details>
<summary>Cuestiones</summary>
<br>

### Q1-1. Identifique los cinco componentes de un sistema de comunicación de datos.

Los cinco componentes son el **mensaje**, el **emisor**, el **receptor**, el **medio de transmisión** y el **protocolo**. (p.4-5) 
  
---

### Q1-2. ¿Cuáles son los tres criterios necesarios para que una red sea eficiente y efectiva?

Los tres criterios son **rendimiento**, **fiabilidad** y **seguridad**. (p.7-8)
  
---  

### Q1-3. ¿Cuáles son las ventajas de una conexión multipunto sobre una punto a punto?

Algunas ventajas de conexión multipunto frente a conexión punto a punto pueden ser **bajo coste** y **facilidad de instalación**. (p.8)

---
  
### Q1-4. ¿Cuáles son los dos tipos de configuración de línea?

Los dos tipos son **punto a punto** y **multipunto**. (p.8)

  ---
  
### Q1-5. Clasifique las cuatro topologías básicas de red en términos de configuración de la línea.

Topologías de **malla**, **estrella** y **anillo** corresponden a una conexión **punto a punto**.
La topología en **bus** corresponde a una conexión **multipunto**. (p.9-12)

  ---
    
### Q1-6. ¿Cuáles son las diferencias entre los modos de transmisión semidúplex y dúplex?

En transmisión **semidúplex** solo una entidad puede transmitir a la vez; en una transmisión **dúplex** las dos entidades pueden transmitir a la vez.
  
  ---

### Q1-7. Nombre los cuatro tipos básicos de topología de red y cite una ventaja de cada tipo.

- **Malla**: Cada conexión solo transporta la información necesaria. Es robusta. **Privacidad y seguridad**.
- **Estrella**: Más barata que malla. Facil de configurar. **Robusta**.
- **Bus**: **Sencilla de instalar**. Barata.
- **Anillo**: Facil de instalar y reconfigurar. **Fallos son faciles de aislar**.

Estas topologias también presentan algunas desventajas:

- Malla: Dificil de instalar y mantener. Problemas de espacio físico para cables. Puede ser muy cara.
- Estrella: Dependiente del concentrador (hub). Requiere mucho cable.
- Bus: Dificil de reconectar y de aislar fallos.. Dificil de conectar más dispositivos. Degradación de la señal con la distancia. Muy sensible a fallos.
- Anillo: Rotura en el anillo puede inhabilitar la red. Restricciones por maxima longitud del anillo o número de dispositivos. (p.9-12)

  ---
  
### Q1-8. Para una red con n dispositivos, ¿cuál es el número de enlaces de cable necesarios para una malla, un anillo, un bus y una topología en estrella?

- **Malla**: n(n-1)/2
- **Anillo**: n
- **Bus**: n+1
- **Estrella**: n
  
  ---

### Q1-9. ¿Cuáles son algunos de los factores que determinan que una red sea una LAN o una WAN

Los factores generales son **tamaño**, **distancias cubiertas por la red**, **estructura** y **titularidad de la propiedad**. (p.14)

  ---
  
### Q1-10. ¿Qué es un internet? ¿Qué es Internet?

Un internet es una interconexión de redes. Internet es el nombre de una red global específica.
  
  ---

### Q1-11. ¿Por qué se necesitan los protocolos?

Un protocolo define qué es comunicado, cuándo y de qué manera. Esto **proporciona una transferencia precisa y oportuna de información entre diferentes dispositivos en una red**.

  ---   
  
### Q1-12. En una LAN con un interruptor de capa de enlace (Figura 1.8b ), el Host 1 quiere enviar un mensaje al Host 3. Dado que la comunicación es a través del interruptor de capa de enlace, ¿el interruptor debe tener una dirección? Desarróllelo.

Un interruptor de capa de enlace es un conmutador (switch). Un dispositivo de este tipo no requiere tener asignada ninguna dirección ni física (MAC) ni lógica (IP). Lo que si tiene que hacer es consultar las direcciones físicas (MAC) de las tramas que le llegan para poder encaminarlas por el puerto de salida correspondiente tras consultar la tabla que vinvula direcciones y puertos.

Si es un conmutador de gama alta (gestionable) puede tener dirección MAC asignada para poder establecer conexiones con él desde una terminal de control pero sería para tareas de configuración del equipo.
  
  ---

### Q1-13. ¿Cuántas redes WAN punto a punto se necesitan para conectar n redes LAN si cada red LAN debe ser capaz de comunicarse directamente con cualquier otra red LAN

Cada LAN se conecta a las (n-1) LANs restantes. Esto representa n(n-1) conexiones. Como las conexiones pueden ser usadas en ambas direcciones, solo necesitaremos la mitad de esas conexiones, por lo tanto la respuesta es **n(n − 1)/2**.

  ---
  
### Q1-14. Cuando usamos los teléfonos locales para hablar con un amigo, ¿estamos usando una red de conmutación de circuitos o una red de conmutación de paquetes?

Una red de **conmutación de circuitos**. Se trata de una conexión dedicada, donde la información se transmite directamente sin cola o retraso.(p.15-17)

  ---
  
### Q1-15. Cuando un residente utiliza un servicio de marcación o DLS para conectarse a Internet, ¿cuál es el papel de la compañía telefónica?

La compañia telefónica  actua como un **ISP (Proveedor de Servicios de Internet)**. La conexión del residente a la compañia telefónica es un acceso WAN punto a punto que conecta el domicilio a Internet. La compañia telefónica provee al residente con los servicios necesarios, como por ejemplo correo electrónico. (p.18-19)

  ---
  
### Q1-16. ¿Cuál es el primer principio que discutimos en este capítulo para la arquitectura por niveles de protocolo que debe seguirse para que la comunicación sea bidireccional?

El primer principio dice que para tener comunicación bidireccional, cada nivel debe ser capaz de realizar dos tareas opuestas, una en cada sentido. Esto en realidad está explicado en el siguiente tema.(p.34)

  ---
  
### Q1-17. Explique la diferencia entre un borrador de Internet y una propuesta de estándar.

Un **borrador de Internet** es un **documento de trabajo sin estatus oficial** y un tiempo de vida de seis meses. Puede convertirse en una propuesta de estándar después de seis meses si ha recibido suficiente atención en la comunidad de Internet. (p.22-23)

  ---
  
### Q1-18. Explique la diferencia entre una RFC requerida y una RFC recomendada.

La **RFC requerida** debe ser implementada por todos los sistemas de Internet, mientras que una **RFC recomendada** no es requerida pero su implementación, aunque por su utilidad se recomiende. 

  ---
  
### Q1-19. Explique la diferencia entre las tareas del IETF y del IRTF

El **IETF** (Grupo de Trabajo de Ingeniería de Internet) es responsable de **identificar problemas operacionales y proponer soluciones a estos problemas**. 
El **IRTF** (Grupo de Trabajo de Investigación de Internet) se centra en temas de **investigación a largo plazo**, como protocolos, aplicaciones, arquitectura y tecnología de Internet.

  
</details>

<details>
<summary>Problemas</summary>
<br>

### P1-1. ¿Cuál es el máximo número de carácteres o símbolos que se pueden representar con Unicode?
  
Con Unicode se pueden representar hasta **1,111,998** carácteres diferentes: 17 planos × 65,536 carácteres por plano - 2048 subrogados - 66 no-carácteres
  
---

### P1-2. Una imagen a color usa 16 bits para representar un pixel. ¿Cuál es el número máximo de colores diferentes que se pueden representar?

  Con 16 bits se pueden representar **2<sup>16</sup>=65536**  colores diferentes.
  
---  

### P1-3. Supón que seis dispositivos están organizados en una topología de malla. ¿Cuántos cables se necesitan? ¿Cuántos puertos son necesarios para cada dispositivo?

  - **Cables**: n<sub>cables</sub> = 6(6-1)/2 = **15**
  - **Puertos**: n<sub>puertos</sub> = 6-1 = **5**

---
  
### P1-4. Para cada una de las siguientes redes, comenta las consecuencias si una conexión falla.
### a. Cinco dispositivos conectados en malla
  Si la conexión falla, el resto de conexiones seguirán funcionando.
  
### b. Cinco dispositivos conectados en estrella (sin contar el hub)
  El resto de dispositivos seguirá siendo capaz de enviar datos a traves del hub, pero no se puede conectar con el dispositivo  cuya conexión al hub falló.
  
### c. Cinco dispositivos conectados en bus
  Si el fallo es en un cable de conexión, ese dispositivo queda fuera de alcance. Si el fallo es en el cable principal, toda la red queda inutilizada.
  
### d. Cinco dispositivos conectados en anillo.
  Un fallo en una conexión deja inhabilitada toda la linea, a menos que que sea un anillo dual, o se haya implementado algún mecanismo de conmutación para puentear la conexión fallida.(p.9-12)

  ---
  
### P1-5. Tenemos dos ordenadores conectados en casa por un concentrador (Ethernet hub). ¿Se trata de una LAN o una WAN?Razona tu respuesta..

Es una Red de Area Local (LAN), pues es de tamaño limitado, interconecta (dos) Hosts y es de propiedad privada.(p.14)

  ---
    
### P1-6. En una topología de anillo como la de la figura 1.7, ¿qué ocurre si se desconecta una de las estaciones?

Teóricamente, en una topología de anillo, desconectar una estación implica interrumpir la red. Sin embargo, hoy en día muchas redes en anillo usan un mecanismo para puentear la estación para que la red pueda continuar operando.
  
  ---

### P1-7. En una topología en bus como la de la figura 1.6, ¿qué ocurre si se desconecta una de las estaciones?

En una topología de bus, ninguna estación está en el camino de la señal, por lo que desconectar una estación no tiene ningún efecto sobre la red.

  ---
  
### P1-8. El rendimiento es inversamente proporcional a la latencia. Cuando usamos Internet, ¿cuál de las siguientes aplicaciones son más sensibles a la latencia?
### a. Enviar un correo electrónico
  El correo electrónico no es una aplicación interactiva. Aunque es enviado inmediatamente, no se requiere que sea abierto inmediatamente y puede llegar esperar en el servidor un periodo prolongado de tiempo. Es por lo tanto, casi nada sensible a latencia.
  
### b. Copiar un fichero
  No se espera de un fichero que sea copiado inmediatamente, por lo que no es muy sensible a latencia.
  
### c. Navegar por internet
  Para una navegación fluida se espera una respuesta rápida de las páginas web que estamos visitando, por lo que es muy sensible a la latencia.
  
  ---

### P1-9. Cuando una persona realiza una llamada de teléfono local a otra persona, ¿es una conexión punto a punto o multipunto? Razona tu respuesta.

  Se trata de una comunicación exclusiva entre la persona que llama y el receptor, por lo que se establece Una linea dedicada entre ellos. Esto es una conexión **punto a punto** 
  
  ---
  
### P1-10. Compara la red telefónica e Internet. ¿En qué se parecen? ¿En qué se diferencian?

  Ambas son similares en el hecho de que están construidas como interconexiones de muchas redes menores.
  
  La red telefónica fué designada originalmente para transmitir voz, mientras que Internet fué concebida originalmente para transmitir datos. Esto implica además, que la red telefónica es en su mayor parte una red de conmutación de circuitos, mientras que Internet es principalmente una red de conmutación de paquetes.
 
</details>

[Volver al índice](#indice)

## Tema 2. Modelos de redes <a name="tema2"></a>
<details>
<summary>Cuestiones</summary>
<br>

### Q2-1. Según se describe en este capítulo, ¿qué principio básico ha de seguirse respecto a protocolos de arquitectura por niveles para que la comunicación sea bidireccional?
  
  Para que la comunicación sea bidimensional, cada capa o nivel debe ser capaz de proporcionar dos tareas opuestas, una en cada dirección.
  
  ---
  
### Q2-2. ¿Qué niveles del conjunto de protocolos TCP/IP están involucrados en un conmutador de nivel de enlace?
  
  Nivel físico y nivel de enlace de datos. (p.37-38)
  
  ---
  
### Q2-3. Un enrutador conecta tres enlaces (redes). ¿Con cuántos de cada uno de los siguientes niveles puede estar involucrado el enrutador?
### a. Nivel físico
Tres niveles
  
### b. Nivel de enlace de datos
Tres niveles
  
### c. Nivel de red
Un nivel (p.41)
  
  ---

### Q2-4. En el conjunto de protocolos TCP/IP, ¿cuáles son los objetos idénticos en el sitio del emisor y del receptor cuando pensamos en la conexión lógica en el nivel de aplicación?

  El mensaje.(p.38)
  
  ---
  
### Q2-5. Un host se comunica con otro host usando el conjunto de protocolos TCP/IP. ¿Cuál es la unidad de datos que se envía o recibe en cada uno de los siguientes niveles?
### a. Nivel de aplicación
  
  Mensaje
  
### b. Nivel de red
  
  Datagrama
  
### c. Nivel de enlace de datos
  
  Trama (frame) (p.41-42)

  ---
  
### Q2-6. ¿Cuál de las siguientes unidades de datos está encapsulada en una trama?
### a. Un datagrama de usuario
  
  Si, pero no de manera directa. El datagrama de usuario es la unidad de datos del nivel de transporte (para protocolo UDP), este es encapsulado en un datagrama en el nivel de red, y entonces de nuevo encapsulado, esta vez en una trama, en el nivel de enlace de datos.
  
### b. Un datagrama
  
  Si, el nivel de enlace de datos encapsula un datagrama en una trama.
  
### c. Un segmento
  
  Si, pero no de manera directa. El segmento es la unidad de datos del nivel de transporte (para protocolo TCP), este es encapsulado en un datagrama en el nivel de red, y entonces de nuevo encapsulado, esta vez en una trama, en el nivel de enlace de datos.

  ---
  
### Q2-7. ¿Cuál de las siguientes unidades de datos se desencapsula a partir de un datagrama de usuario?
### a. Un datagrama
  
  No, el datagrama es la unidad de datos del nivel de red y se desencapsula de una trama (nivel de enlace de datos).
  
### b. Un segmento
  
  No, el segmento es la unidad de datos del nivel de transporte cuando se usa el protocolo TCP y se desencapsula de un datagrama (nivel de red).
  
### c. Un mensaje

  Correcto, el mensaje es la unidad de datos del nivel de aplicación y se desencapsula de un datagrama de usuario (nivel de transporte con protocolo UDP). (p.41-42)
  
  ---
  
### Q2-8. ¿Cuál de las siguientes unidades de datos tiene un mensaje del nivel de aplicación más el encabezado del nivel 4?
### a. Una trama
  
  Una trama es encapsulada en el nivel de enlace de datos (nivel 2) a partir de un datagrama, y lleva por lo tanto, además del mensaje, el encabezado de los niveles 2, 3 y 4. 
  
### b. Un datagrama de usuario
  
  Un datagrama de usuario es encapsulado en el nivel de transporte (nivel 4) a partir de un mensaje, y lleva por lo tanto, además del mensaje, el encabezado de su nivel. 
  
### c. Un bit
  
  Un bit es la mínima unidad de información y no trae, por definición, ni mensaje ni encabezado de ningún tipo, tan solo un valor en alta, 1, o en baja, 0.

  ---
  
### Q2-9. Enumere algunos protocolos de nivel de aplicación que se mencionan en este capítulo.
  
- HTTP, Protocolo de Transferencia de Hipertexto
- SMTP, Protocolo Simple de Transferencia de Correo
- FTP, Protocolo de Transferencia de Archivos
- TELNET, Red de Terminales
- SSH, Secure Shell
- SNMP, Protocolo Simple de Gestión de Redes

  ---
  
### Q2-10. Si un número de puerto es de 16 bits (2 bytes), ¿cuál es el tamaño mínimo de la cabecera en el nivel de transporte del conjunto de protocolos TCP/IP?
  
  Como el segmento (o datagrama de usuario) debería incluir el número de puerto de la fuente y del destinatario, la cabecera no puede ser menor de 2x2 bytes, o sea 4 bytes = 32 bits.

  ---
  
### Q2-11. ¿Qué tipos de direcciones (identificadores) se utilizan en cada uno de los siguientes niveles?
### a. Nivel de aplicación
  
En el nivel de aplicación se usan normalmente **nombres** para definir el nombre del ordenador de destino o el nombre del fichero al que queremos acceder. Un ejemplo es *alguien@algunsitio.com*
  
### b. Nivel de red
  
  En el nivel de red, se usan dos **direcciones lógicas** (fuente y destino) para definir los ordenadores fuente y destino. Estas direcciones son únicas universalmente.
  
### c. Nivel de enlace de datos
  
  En el nivel de enlace de datos, se usan dos **direcciones de nivel de enlace** para definir las conexiones fuente y destino del enlace.

  ---
  
### Q2-12. Cuando decimos que la capa de transporte multiplexa y demultiplexa los mensajes de la capa de aplicación, ¿queremos decir que un protocolo de nivel de transporte puede combinar varios mensajes del nivel de aplicación en un paquete? Explíquelo.
  
No, significa que un protocolo de nivel de transporte puede encapsular paquetes de diferentes protocolos de nivel de aplicación. Para ello se añade un campo en la cabecera que identificael protocolo al que pertenece el paquete encapsulado.
  
  ---
  
### Q2-13. ¿Puede explicar por qué no mencionamos los servicios de multiplexación/demultiplexación para el nivel de aplicación?
  
  El nivel de aplicación es el nivel más alto del conjunto de protocolos. Esto significa que no proporciona servicios a ninguna otra capa, por lo que hablar de multiplexación/demultiplexación en esta capa no tiene sentido.
  
  ---
  
### Q2-14. Supongamos que queremos conectar dos hosts aislados para que cada uno se comunique con el otro. ¿Necesitamos un conmutador de enlace entre ambos? Desarrollar.
  
  No, no es necesario. Un conmutador (switch) de nivel de enlace se utiliza normalmente para enlazar de manera eficiente hosts en la misma red. Si los hosts que queremos conectar se encuentran dentro de una distancia relativamente pequeña se pueden conectar punto a punto, y el conmutador no es necesario (solo si además a esa red queremos conectar algunos perifericos, como una impresora, por ejemplo). Si están muy alejados, habría que conectarlos con un intermediario, pero en este caso se trataría de un enrutador.
  
  ---
  
### Q2-15. Si hay un solo camino entre el host de origen y el de destino, ¿necesitamos un enrutador entre los dos hosts?
  
  **No**. Un enrutador es necesario cuando hay más de un camino entre dos hosts. En ese caso, el enrutador es responsable de elegir el camino óptimo en cada momento.

    
</details>

<details>
<summary>Problemas</summary>
<br>
  
### P2-l. Responda a las siguientes preguntas sobre la Figura 2.2 cuando la comunicación sea de María a Ana:
### a. ¿Cuál es el servicio proporcionado por el nivel 1 al nivel 2 en el sitio de María?
  
  El nivel 1 coge el texto cifrado del nivel 2, lo mete en un sobre (lo encapsula) y lo envía.
  
### b. ¿Cuál es el servicio proporcionado por el nivel 1 al nivel 2 en el sitio de Ana?
  
  El nivel 1 recibe el correo, saca mensaje cifrado del sobre (lo desencapsula) y lo pasa al nivel 2.
  
  ---
  
### P2-2. Responda a las siguientes preguntas sobre la Figura 2.2 cuando la comunicación es de María a Ana:
### a. ¿Cuál es el servicio proporcionado por el nivel 2 al nivel 3 en el sitio de María?
  
  El nivel 2 coge el texto simple del nivel 3, lo cifra (lo encapsula) y lo pasa al nivel 1.
  
### b. ¿Cuál es el servicio proporcionado por el nivel 2 al nivel 3 en el sitio de Ana?
  
  El nivel 2 coge el texto cifrado del nivel 1, lo descifra (lo desencapsula) y lo pasa al nivel 3.
  
  ---
  
### P2-3. Supongamos que el número de hosts conectados a Internet en el año 2010 es de quinientos mil1ones. Si el número de hosts aumenta solo un 20 por ciento por año, ¿cuál es el número de hosts en el año 2020?
  
  
  Sea H_n el número de hosts conectados a Internet en el año n. Si en 2010 había 500 millones de hosts, con un crecimiento anual del 20% tenemos:
  
  H<sub>2020</sub> = 5&sdot;10<sup>8</sup>&sdot;1.20<sup>10</sup> &#8776; 3 &sdot;10<sup>9</sup>
  
  Aproximadamente 3.000 millones.
  
  ---
  
### P2-4. Supongamos que un sistema utiliza cinco niveles de protocolo. Si el programa de aplicación crea un mensaje de 100 bytes y cada capa (incluyendo la quinta y la primera) añade un encabezado de 10 bytes a la unidad de datos, ¿cuál es la eficiencia (la relación entre los bytes de la capa de aplicación y el número de bytes transmitidos) del sistema?
  
  Como cada una de las cinco capas añade 10 bytes, el número de bytes transmitidos es de 150 bytes. Esto nos da una eficiencia de 100/150 = 2/3 &#8776; 66.67%   
  
  ---
  
### P2-5. Supongamos que hemos creado una Internet de conmutación de paquetes. Usando el conjunto de protocolos TCP/IP, necesitamos transferir un archivo enorme. ¿Cuál es la ventaja y la desventaja de enviar paquetes grandes?
  
  Cuando enviamos paquetes grandes la eficiencia es mayor que si enviamos la misma información en paquetes pequeños ya que la cantidad de los datos que se añaden al encapsular es menor. La desventaja es que en caso de perdida de un paquete o corrupción de los datos durante la transmisión, se necesita reenviar mucha más información.
  
  ---
  
### P2-6. Relacione los siguientes elementos con uno o más niveles del conjunto de protocolos TCP/IP:
### a. Determinación de ruta
  
  Nivel de red y de enlace de datos
  
### b. Conexión a los medios de transmisión

  Nivel físico
  
### c. Proporcionar servicios al usuario final

  Nivel de aplicación
  
  ---
  
### P2-7. Relacione los siguientes elementos con uno o más niveles del conjunto de protocolos TCP/IP:
### a. Crear datagramas de usuario
  
  Los datagramas de usuario se crean en el nivel de transporte (protocolo UDP).
  
### b. Responsabilidad de manipular el envío de tramas entre nodos adyacentes
  
  El nivel de enlace de datos es el responsable de mover las tramas entre nodos adyacentes.
  
### c. Transformar bits en señales electromagnéticas
  
  Este proceso ocurre en el nivel físico.
  
  ---
  
### P2-8. En la Figura 2.10, cuando el protocolo IP desencapsula el paquete del nivel de transporte, ¿cómo sabe a qué protocolo de nivel superior ha de entregarse (UDP o TCP)?
  
  Al multiplexar en origen, el nivel de red añade a la cabecera un campo para identificar el protocolo al que pertenece el paquete. Al demultiplexar en destino, el protocolo lee el campo con la información de protocolo y entrega el paquete a quien corresponde.
  
 ---
  
### P2-9. Supongamos que una Internet privada usa tres protocolos distintos en el nivel de enlace de datos (L1, L2 y L3). Vuelva a dibujar la Figura 2.10 siguiendo esta premisa. ¿Podemos decir que en el nivel de enlace de datos, tenemos demultiplexación en el nodo fuente y multiplexación en el nodo del destinatario?
  
 ![Problema 2-9](https://github.com/mt0rm0/materiales-informatica-uned/blob/main/redes/P2-9.jpg)
  
  Si se entiende multiplexar como un proceso de varios (protocolos) a uno y demultiplexar como un proceso de uno a varios, se tendría demultiplexación en el nivel de enlace de datos de la fuente y multiplexatción en el nivel de enlace de datos del destino. Sin embargo, desde un punto de vista más purista, la multiplexación implica la habilidad de un protocolo para encapsular paquetes de datos del diferentes protocolos de un nivel superior. De acuerdo a esa definición, no tendriamos demultiplexación, sino lo que se conoce como **demultiplexación inversa**. Su equivalente en el nodo destino sería la **multiplexación inversa**.
  
  ---
  
### P2-10. Supongamos que una Internet privada requiere que los mensajes del nivel de aplicación estén cifrados y descifrados por motivos de seguridad. Si necesitamos añadir alguna información sobre el proceso de cifrado/descifrado (como los algoritmos usados en el proceso), ¿significa que estamos añadiendo un nivel al conjunto de protocolos TCP/IP? Rediseñe las capas TCP/IP (Figura 2.4 parte b) si lo cree así.
  
  No, no estamos añadiendo ningúnnivel extra. Simplemente el nivel de transporte asume otro función más y contiene ahora también el proceso de encriptado/desencriptado. 
  
  ---
  
### P2-11. La arquitectura modular de protocolos se puede encontrar en muchos aspectos de nuestras vidas, como en los viajes aéreos. Imagine que hace un viaje de ida y vuelta para pasar un tiempo de vacaciones en un complejo turístico. Tiene que pasar por algunos procesos en el aeropuerto de su ciudad antes de volar. También hay que pasar por algunos procesos al llegar al aeropuerto del destino. Muestra los niveles de protocolo para el viaje de ida y vuelta utilizando algunos niveles como la facturación y recogida de equipajes, embarque y desembarque, despegue y aterrizaje.
  
  ![Problema 2-11](https://github.com/mt0rm0/materiales-informatica-uned/blob/main/redes/P2-11.jpg)
  
  ---
  
### P2-12. La presentación de datos es cada vez más importante en la Internet de hoy en día. Algunas personas sostienen que el conjunto de protocolos TCP/IP necesita añadir un nuevo nivel para ocuparse de la presentación de los datos. Si se añade este nuevo nivel en el futuro, ¿dónde debería estar su posición en el conjunto? Redibuje la Figura 2.4 para incluir dicho nivel.
  
  Se encontraría entre el nivel de aplicación y el nivel de transporte, en el mismo lugar que ocupa en el Modelo OSI.
  
  ![Problema 2-12](https://github.com/mt0rm0/materiales-informatica-uned/blob/main/redes/P2-12.jpg)
  
  ---
  
### P2-13. En una Internet, cambiamos la tecnología LAN a una nueva. ¿Qué niveles del conjunto de protocolos TCP/IP deben cambiarse?
  
  Los únicos dos niveles que han de cambiarse son el de enlace de datos y el físico. El nuevo hardware y software necesita ser instalado en todos los hosts, enrutadores y conmutadores de nivel de enlace. Mientras el nuevo nivel de enlace puede encapsular y desencapsular datagramas del nivel de red, no hay necesidad de cambiar el protocolo de los tres niveles superiores. Esta es una de las características de la arquitectura por niveles.
  
  ---
  
### P2-l4. Supongamos que se ha escrito un protocolo de nivel de aplicación para utilizar los servicios de UDP. ¿Puede el protocolo de nivel de aplicación utilizar los servicios de TCP sin cambios?
  
  No, si un protocolo de nivel de aplicación ha sido escrito para usar el protocolo UDP, no será capaz de usar servicios de TCP, ya que son protocolos diferentes que funcionan de manera diferente y no proveen los mismos servicios. Aún si resultara que la aplicación solo usa servicios que también están incluidos en TCP, el protocolo debería ser reescrito para poder usar con TCP.
  
  ---
  
### P2-15. Usando la Internet en la Figura 1.11 (Capítulo 1), muestre los niveles del conjunto de protocolos TCP/IP y el flujo de datos cuando dos hosts, uno en la costa oeste y el otro en la costa este, intercambian mensajes.
  
  ![Problema 2-15](https://github.com/mt0rm0/materiales-informatica-uned/blob/main/redes/P2-15.jpg)
   
</details>

[Volver al índice](#indice)
