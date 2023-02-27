# Processadors-Digitals

## Pràctica 1
  Aquesta primera pràctica consisteix en introduïr el funcionament bàsic de la placa **ESP32** i intal·lar el programari necessari per poder-la programar.
  
### Programació de la placa
Un cop dins de **Visual Studio Code** podem introduir codi a la placa amb l'extensió de *Platformio*; la qual ens dona la primera pista del funcionament de la placa.
La placa guarda el codi en dues funcions per defecte, una funció   `void setup()`   i una altra `void loop()`. La primera funció executarà el codi que haguem introduït un sol cop al iniciar-se. La segona funció executarà el codi que introduïm en bucle indefinidament. 
Per aquesta primera pràctica principalment utilitzarem aquesta segona funció `loop()`.

#### Funció `setup()`
En aquesta primera funció indicarem a la placa l'ús que volem donar-li als pins que utilitzem i el terminal serie (en cas de no utilitzar cap pin només definirem el terminal serie).
Per a la primera part de la pràctica teníem que fer un programa que engegués intermitentment el LED de la placa amb un periode que nosaltres definíssim. Per això definim el LED de la placa com a sortida de la següent forma:
~~~ 
void setup() {                
  pinMode(led, OUTPUT);   
  Serial.begin(115200);
  //Serial.println("Hola mundo!");  
}
~~~
Com podem veure, indiquem a la placa que utilitzi el LED com a *output*. Prèviament havíem definit un enter `int led = 23;` al pin 23.

#### Funció `loop()`
En aquesta part del codi és on indicarem a la placa el que volem que faci amb el LED. L'enunciat de la pràctica ens demanava encendre el LED, treure per pantalla \'ON' i introduïr un *delay* avans de repetir el mateix procés per apagar el LED.
~~~
void loop() {
  Serial.println("ON");
  digitalWrite(led, HIGH);
  delay (500);
  Serial.println("OFF");
  digitalWrite(led, LOW);
  delay (500);
}
~~~
### Segona part de la pràctica
En aquesta segona part, i un cop havent-nos familiaritzat amb el funcionament i programació de la placa, s'ens proposava un repte. Al codi anterior, al introduïr la funció `delay(500)` el processador para tots els processos durant aquest *delay*, i per tant no pot dur a terme cap altre mena de processat. El repte consistía en trobar una forma de mantenir el *delay* en l'encesa del LED, però sense bloquejar el processat de la placa.
La solució que vam trobar consistia en definir una nova variable de valor el temps de *delay* que volíem introduïr al LED i comparat el rellotge intern de la placa amb aquesta variable. Si el temps arribava al valor de la variable, engegavem el LED i reiniciavem el rellotge.
El codi per fer això està al fitxer **Practica_1.2.cpp**.

### Més exercissis

A l'enunciat de la pràctica s'ens proposaven dos exercissis més; els quals corresponen amb els fitxers **Practica_1.3.cpp**, **Practica_1.3.2.cpp** i **Practica_1.4.cpp**.
L'exercissi 1.3 consistia a llegir la temperatura interna de la placa i mostrar el valor per pantalla; actualitzant-lo cada x segons. Al primer fitxer d'aquest exercissi utilitzem la funció `delay()` mentre que al segón introduïm el *delay* amb el mateix procediment que utilitzem a la **Practica_1.2.cpp**.
L'ultim exercissi ens demanava treure per pantalla el voltatge que arribava a un dels pins des d'una font d'alimentació. Aquest exercissi correspon amb el fitxer **Practica_1.4.cpp**.
___ 
