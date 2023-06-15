# Laura Helena Molina - A01706282
# Proyecto: Lógistica de Transporte

Este proyecto tiene por objetivo crear un prototipo de un programa para una empresa dedicada a la logísitca de transportes, en el cual los empleados puedan accesar a la información de los transportes que tienen en la empresa. Asimismo, se puede buscar por capacidad de kg, pallets y cajas, así como la velocidad para filtrar los transportes. Además, en el programa se podrá observar que transportes están disponibles para ser usados.

# Diagrama UML

En el UML se puede observar que la clase Transporte tiene una relación de composición a la clase Base, ya que estos transportes no pueden ser compartido con otras bases y la clase base necesita accesar a los datos de la clase Transporte. Por otro lado, la clase Transporte es una clase abstracta de la cual parten las subclases Aereo, Maritimo, Terrestre de las cuales se generan los objetos con sus respectivos métodos.

# Consideraciones

Este programa no permite al usuario registrar nuevos transportes. Por lo tanto si se quieren registrar nuevos, se deben crear dentro del código. Si el usuario pide un transporte que no cumpla
con las caracteristicas, no lanzará una advertencia de que tal transporte no existe, sencillamente no se imprimirán transportes. Por otro lado, si el usuario ingresa una caracteristica que no
sea igual al tipo de dato preestablecido (string en vez de int) esto causará un error en el código donde se generará un buncle infinito donde se imprimen todos los transportes. 

Otra limitación que tiene este programa es que los atributos no pueden ser modificados directamente por el usuario. Esto significa, que si se desea corregir o actualizar un dato se debe hacer desde el código. Además, en el caso de que se deseen implementar futuros métodos, en caso de que estos pertenezcan a una clase agena a Transporte deberan de crearse getters y setters para ciertos atributos.

# Consideraciones

Se hicieron algunos ajustes al formato del código para que no pasara de 68 caracteres.
