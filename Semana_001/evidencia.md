# 🚀 Semana 01 — Estructura de Datos

> 📚 **Práctica de Introducción a las Estructuras de Datos**

## 🎯 Misión

En esta práctica aprendí un poco más sobre cómo se pueden guardar y organizar datos en un programa. También aprendí a usar arreglos, sus índices y una búsqueda secuencial. Algo que me quedó claro es que cuando hay pocos datos todo parece sencillo, pero cuando empiezan a aumentar hay que pensar más en qué tan rápido y práctico es el programa.

## 📌 Datos

Un dato es simplemente una información que podemos guardar y utilizar en un programa. En este caso trabajamos con números enteros, como **10, 20, 30, 40 y 50**.

## 🧩 Estructura de datos

Una estructura de datos es la manera en que acomodamos y guardamos información para poder trabajar con ella más fácilmente. En esta práctica usamos un **arreglo** para guardar los números.

## 🧠 TDA — Tipo de Dato Abstracto

Un TDA, o Tipo de Dato Abstracto, es como una forma de decir qué podemos hacer con un conjunto de datos sin preocuparnos todavía de cómo está hecho por dentro. Por ejemplo, podemos decir que una colección permite **agregar, buscar y mostrar datos**.

## ⚖️ Diferencia entre TDA y estructura de datos

La diferencia es que el **TDA** se enfoca más en las operaciones que podemos hacer, mientras que la **estructura de datos** nos dice cómo se van a guardar y organizar realmente los datos. En este programa usamos un arreglo para llevar a cabo la colección.

## ➡️ Estructuras lineales

Son estructuras donde los datos van acomodados uno después de otro, siguiendo un orden. Por ejemplo, un arreglo tiene sus elementos en posiciones consecutivas.

**Algunos ejemplos son:**

* Arreglos
* Listas enlazadas
* Pilas
* Colas

## 🌳 Estructuras no lineales

Son estructuras donde los datos no necesariamente están acomodados uno después de otro. Pueden tener diferentes conexiones o relaciones entre ellos.

**Algunos ejemplos son:**

* Árboles
* Grafos

## 💻 Programa

### 🔧 ¿Qué estructura utilicé?

Utilicé un **arreglo de números enteros** llamado `datos`:

```cpp
int datos[MAX];
```

El arreglo puede guardar como máximo **100 elementos**.

### 💾 ¿Cómo almacena los datos?

Los números se van guardando uno por uno dentro del arreglo. La variable `cantidad` sirve para saber cuántos datos llevamos guardados.

Por ejemplo, si `cantidad` vale **5**, quiere decir que tenemos cinco datos guardados, en las posiciones del **0 al 4**.

### 🔢 ¿Cómo utiliza los índices?

Los índices sirven para saber en qué posición está cada dato. Algo importante es que en C++ las posiciones empiezan desde **0**.

Por ejemplo:

```text
indice:  0   1   2   3   4
dato:   10  20  30  40  50
```

Entonces el **10 está en la posición 0** y el **50 está en la posición 4**.

### 🔎 ¿Cómo realiza la búsqueda?

El programa hace una **búsqueda secuencial**. Básicamente va revisando los números uno por uno hasta encontrar el que estamos buscando.

Si encuentra el número, nos dice en qué posición está. Si revisa todos los datos y no lo encuentra, nos dice que el dato no existe.

# 🏆 Reto

Se comparó qué pasa cuando tenemos diferentes cantidades de datos:

| Cantidad de datos | Máximo de revisiones |
| ----------------: | -------------------: |
|                10 |                   10 |
|               100 |                  100 |
|             1,000 |                1,000 |
|            10,000 |               10,000 |

Con **10 datos** la búsqueda es muy sencilla porque hay pocos elementos que revisar. Pero cuando pasamos a **1,000 o 10,000 datos**, puede tardar más, especialmente si el dato que buscamos está hasta el final o simplemente no existe.

El programa que hice tiene espacio para **100 datos**. Si quisiera trabajar con 10,000 tendría que aumentar el tamaño del arreglo o utilizar otra estructura que se adapte mejor a esa cantidad.

# 🧪 Resultados de las pruebas

## 🟢 Prueba A — 10 datos

Metí los números del **10 al 100**, aumentando de 10 en 10.

* Al mostrar los datos, aparecen junto con su índice.
* Al buscar el número **30**, el programa lo encuentra.
* Al buscar el número **99**, el programa indica que no lo encontró.

## 🟡 Prueba B — 100 datos

El arreglo puede llegar hasta **100 elementos**.

* Se pueden guardar los 100 datos.
* Si intento meter otro dato después de los 100, aparece el mensaje de que la colección está llena.
* Para buscar un dato podría ser necesario revisar hasta 100 posiciones.

## 🔴 Prueba C — 10,000 datos

Aquí hay un detalle: el arreglo del programa solamente tiene espacio para **100 datos**, así que no puede guardar directamente 10,000 sin modificarlo.

La prueba sirve para darnos cuenta de que cuando la cantidad de información crece, también puede aumentar el trabajo que tiene que hacer el programa.

Si tuviéramos un arreglo con 10,000 elementos y buscáramos un dato que estuviera al final, podríamos tener que revisar hasta **10,000 posiciones**.

# 📝 Preguntas de análisis

## 1. ¿Qué diferencia existe entre almacenar datos y organizarlos?

Para mí, almacenar datos es simplemente **guardarlos**. Organizarlos ya es acomodarlos de una manera que después sea más fácil encontrarlos, modificarlos o trabajar con ellos.

## 2. ¿Por qué una estructura de datos puede hacer más sencillo trabajar con información?

Porque nos ayuda a tener los datos acomodados y así podemos trabajar con ellos de una forma más ordenada. Por ejemplo, con un arreglo podemos saber exactamente en qué posición está cada dato.

## 3. ¿Qué es una estructura lineal?

Es una estructura donde los datos están acomodados siguiendo un orden, como si fueran uno detrás de otro. Un arreglo es un ejemplo porque cada elemento tiene su propia posición.

## 4. ¿Qué es una estructura no lineal?

Es una estructura donde los datos pueden estar relacionados de diferentes maneras y no necesariamente están acomodados en una sola fila. Los árboles y los grafos son algunos ejemplos.

## 5. ¿Qué es un TDA?

Es una forma de describir qué podemos hacer con ciertos datos sin tener que explicar exactamente cómo están hechos por dentro. Por ejemplo, podemos tener una colección donde podamos agregar, buscar y mostrar elementos.

## 6. ¿Cuál es la diferencia entre un TDA y una estructura de datos?

Yo lo entiendo así: el **TDA dice qué operaciones podemos hacer**, mientras que la **estructura de datos es la forma en que realmente guardamos y organizamos la información** para poder hacer esas operaciones.

## 7. ¿Qué sucede con una búsqueda cuando aumenta considerablemente la cantidad de datos?

La búsqueda puede tardar más porque tiene que revisar más elementos. En este programa, como la búsqueda es secuencial, va revisando uno por uno, así que entre más datos haya, más posiciones puede tener que revisar.

## 8. ¿Por qué no existe una estructura de datos perfecta para todos los problemas?

Porque no todos los problemas necesitan lo mismo. Una estructura puede ser buena para buscar datos, pero no necesariamente ser la mejor para agregar o eliminar información. Por eso primero hay que ver qué necesitamos hacer.

## 9. ¿Qué ventajas y limitaciones observaste al utilizar un arreglo?

Una ventaja es que es sencillo de usar y podemos acceder rápidamente a un dato si conocemos su índice. La principal limitación que vi es que tiene una capacidad definida. En este caso solamente podemos guardar **100 datos**.

## 10. ¿Qué cambiarías si tuvieras que administrar 10,000 datos?

Cambiaría el arreglo por una estructura que pueda manejar una cantidad mayor de datos. Por ejemplo, podría usar un **`vector`**, ya que puede crecer conforme vamos agregando elementos. También dependería de qué operaciones necesitaría hacer más seguido.

# 💭 Reflexión

Si tuviera que hacer un programa para un problema real, primero pensaría en qué necesito hacer con los datos. Si son pocos datos y necesito algo sencillo, un arreglo podría funcionar bien. Pero si los datos pueden aumentar mucho, buscaría una estructura que se pueda adaptar mejor.

Esta práctica me ayudó a entender que no solamente se trata de hacer que el programa funcione, sino también de pensar qué va a pasar cuando tengamos muchos más datos.

# ⚡ Eficiencia

La búsqueda que utilizamos es **secuencial**, por lo que su costo aumenta conforme aumenta la cantidad de datos. Por eso se representa como **`O(n)`**.

En pocas palabras, si tenemos el doble de datos, en el peor de los casos también podríamos tener que revisar aproximadamente el doble de elementos.

# 🎓 Conclusión

Con esta práctica aprendí a hacer una colección sencilla de datos usando un arreglo. También entendí mejor cómo funcionan los índices y para qué sirve la variable `cantidad`.

Además, pude ver que buscar un dato es fácil cuando tenemos pocos elementos, pero cuando la cantidad aumenta se necesitan más revisiones. Por eso es importante escoger una estructura de datos que se adapte a lo que necesitamos y a la cantidad de información que vamos a manejar.
