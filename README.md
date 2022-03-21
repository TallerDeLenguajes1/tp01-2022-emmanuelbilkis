# tp12022
# Git Ignore 
El git ignore sirve para ignorar los archivos y/o carpetas que no se desea subir a la nube pero que por alguna razon deben estar (o se los desea tener) de forma local en el repositorio. Por ejemplo cuando hay algun archivo con usuarios y contraseña q no se desea compartir, tambien cuando hay archivos de configuracion y son innecesarios subirlos.

## Reglas

Para crear un archivo .gitignore local, crea un archivo de texto y asígnale el nombre ".gitignore" (recuerda incluir el . al principio). Luego, edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.

-Luego se hace un **git add** .gitignore
-Finalmente **git commit** .gitignore

##configuracion

- * se utiliza como una coincidencia comodín.
- / se usa para ignorar las rutas relativas al archivo .gitignore.
- # es usado para agregar comentarios.

