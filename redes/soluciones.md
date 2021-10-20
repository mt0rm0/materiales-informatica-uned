

# Soluciones a los problemas del libro de texto

## Índice
<details>
<summary>Mostrar</summary>

1. [Tema 1](#tema-1)
2. [Tema 2](#tema-2)
3. [Tema 3](#tema-3)
4. [Tema 4](#tema-4)
5. [Tema 5](#tema-5)
6. [Tema 6](#tema-6)
7. [Tema 7](#tema-7)
8. [Tema 8](#tema-8)
9. [Tema 9](#tema-9)
10. [Tema 10](#tema-10)
</details>  


## Tema 1
<details>
<summary>Preguntas</summary>
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

[Volver al índice](#índice)
