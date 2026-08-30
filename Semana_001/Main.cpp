#include <iostream> // Incluye la librería estándar de entrada y salida (para usar cout y cin)
using namespace std; // Permite usar los elementos del espacio de nombres estándar (como cout, cin, endl) sin necesidad de escribir std::

int main() { // Función principal donde inicia la ejecución del programa
    const int MAX = 100; // Define una constante con la capacidad máxima del arreglo (100 elementos)
    int datos[MAX]; // Declara un arreglo de enteros de tamaño 100 para almacenar la colección
    int cantidad = 0; // Declara e inicializa el contador de elementos guardados actualmente
    int opcion; // Declara la variable para almacenar la opción del menú seleccionada por el usuario

    do { // Inicia un bucle "hacer-mientras" que mostrará el menú repetidamente hasta que el usuario decida salir
        cout << "\n===== COLECCION DE DATOS =====" << endl; // Imprime el título del menú principal
        cout << "1. Agregar" << endl; // Muestra la opción 1 para agregar un elemento
        cout << "2. Mostrar" << endl; // Muestra la opción 2 para listar los elementos
        cout << "3. Buscar" << endl; // Muestra la opción 3 para buscar un elemento
        cout << "4. Salir" << endl; // Muestra la opción 4 para salir del programa
        cout << "Seleccione una opcion: "; // Pide al usuario que ingrese una opción
        cin >> opcion; // Captura la opción ingresada por el usuario desde el teclado

        switch (opcion) { // Inicia la estructura condicional para evaluar la opción elegida
            case 1: // Bloque de código si la opción seleccionada es 1 (Agregar)
                if (cantidad < MAX) { // Verifica si aún hay espacio disponible en el arreglo
                    cout << "Ingrese un numero: "; // Solicita al usuario el número que desea ingresar
                    cin >> datos[cantidad]; // Guarda el número ingresado en la posición actual libre del arreglo
                    cantidad++; // Incrementa en 1 el contador de datos guardados
                    cout << "Dato agregado correctamente." << endl; // Muestra un mensaje de confirmación
                } else { // Si la cantidad alcanzó o superó la capacidad máxima MAX
                    cout << "La coleccion esta llena." << endl; // Notifica que no se pueden agregar más elementos
                } // Fin del bloque if-else de validación de espacio
                break; // Sale del switch para no ejecutar los casos siguientes

            case 2: // Bloque de código si la opción seleccionada es 2 (Mostrar)
                if (cantidad == 0) { // Comprueba si no se ha guardado ningún elemento aún
                    cout << "No hay datos almacenados." << endl; // Notifica que el arreglo está vacío
                } else { // Si hay al menos un elemento guardado
                    cout << "\nDatos almacenados:" << endl; // Muestra un encabezado para la lista de datos
                    for (int i = 0; i < cantidad; i++) { // Bucle para iterar desde el índice 0 hasta el último dato registrado
                        cout << "[" << i << "] " << datos[i] << endl; // Imprime el índice y el valor guardado en esa posición
                    } // Fin del bucle for
                } // Fin del bloque if-else
                break; // Sale del switch

            case 3: { // Bloque de código si la opción seleccionada es 3 (Buscar)
                int buscado; // Declara la variable para almacenar el número que se va a buscar
                bool encontrado = false; // Declara e inicializa en falso una bandera que indicará si se halló el número
                int posicion = -1; // Declara e inicializa la variable de posición con un valor no válido (-1)

                cout << "Numero a buscar: "; // Pide al usuario el valor que desea buscar
                cin >> buscado; // Lee el número a buscar desde el teclado

                for (int i = 0; i < cantidad; i++) { // Bucle que recorre cada posición con datos dentro del arreglo
                    if (datos[i] == buscado) { // Compara si el valor actual del arreglo coincide con el valor buscado
                        encontrado = true; // Marca la bandera como verdadera ya que fue encontrado
                        posicion = i; // Guarda el índice (posición) donde se encontró el número
                        break; // Detiene el bucle for tempranamente al encontrar la primera coincidencia
                    } // Fin del condicional de coincidencia
                } // Fin del bucle for

                if (encontrado) { // Comprueba si la bandera "encontrado" es verdadera
                    cout << "Dato encontrado en el indice " << posicion << "." << endl; // Muestra el mensaje indicando el índice
                } else { // Si la bandera sigue siendo falsa
                    cout << "Dato no encontrado." << endl; // Notifica que el dato no existe en la colección
                } // Fin del bloque if-else
                break; // Sale del switch
            } // Fin de la llave que define el ámbito de las variables locales del case 3

            case 4: // Bloque de código si la opción seleccionada es 4 (Salir)
                cout << "Fin del programa." << endl; // Muestra un mensaje de despedida o cierre
                break; // Sale del switch

            default: // Caso que se ejecuta si el usuario ingresa una opción diferente de 1, 2, 3 o 4
                cout << "Opcion no valida." << endl; // Muestra un mensaje de error por opción incorrecta
        } // Fin de la estructura switch

    } while (opcion != 4); // Condición del bucle do-while: se repetirá mientras la opción sea diferente de 4

    return 0; // Indica al sistema operativo que el programa finalizó exitosamente
} // Fin de la función main