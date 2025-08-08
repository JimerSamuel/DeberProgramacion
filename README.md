# DeberProgramacion
Primer Deber de la materia de Fundamentos de la programacion


# 📊 Procesamiento de Datos CSV en C++

Este programa en C++ **lee un archivo CSV (`datos.csv`)** que contiene **valores numéricos separados por comas**, **calcula la suma y el promedio** de cada línea, y **guarda los resultados** en un nuevo archivo llamado `resultados.csv`.

---

## 🧠 ¿Qué hace paso a paso?

1. **Incluye las librerías necesarias**:
   - `iostream`: para mostrar mensajes por consola.
   - `fstream`: para manejar archivos (`ifstream` y `ofstream`).
   - `sstream`: para dividir (parsear) las líneas del archivo por comas.

2. **Abre los archivos**:
   - Intenta abrir `datos.csv` para leer datos.
   - Crea o sobrescribe `resultados.csv` para guardar los resultados.

3. **Verifica si los archivos se abrieron correctamente**:
   - Si no puede abrir `datos.csv`, muestra un mensaje de error y termina el programa.
   - Si no puede crear `resultados.csv`, también muestra un mensaje de error y termina.

4. **Escribe la cabecera en el archivo de salida**:
   ```csv
   Suma,Promedio
   ```

5. **Procesa cada línea del archivo de entrada**:
   - Lee cada línea completa del archivo (`getline`).
   - Separa los números utilizando una coma como delimitador.
   - Convierte cada valor a `int` y acumula la suma y el contador.

6. **Calcula el promedio**:
   - Si hay al menos un número en la línea, calcula el promedio como `suma / cantidad`.

7. **Guarda los resultados** en el archivo `resultados.csv`:
   - Cada línea del nuevo archivo contiene la **suma y promedio** de la línea correspondiente del archivo original.

8. **Cierra los archivos** y muestra un mensaje indicando que todo terminó correctamente.

---

## 📁 Ejemplo de entrada (`datos.csv`)

```csv
10,20,30
5,15,25,35
100,200
```

## 📄 Resultado (`resultados.csv`)

```csv
Suma,Promedio
60,20
80,20
300,150
```

---

## ✅ Conceptos importantes

- `ifstream` / `ofstream`: lectura y escritura de archivos.
- `stringstream`: para dividir texto en partes más pequeñas usando delimitadores.
- `stoi()`: convierte un string en un número entero.
- Control de errores con `is_open()`.
