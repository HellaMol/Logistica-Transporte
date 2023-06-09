# Laura Helena Molina - A01706282
# Proyecto: Lógistica de Transporte

Este proyecto tiene por objetivo crear un prototipo de un programa para una empresa dedicada a la logísitca de transportes, en el cual los empleados puedan accesar a la información de los transportes que tienen en la empresa. Asimismo, se puede buscar por 

# Diagrama UML

En el UML se puede observar que la clase transporte tiene una relación de agregación a la clase base, ya que esta sigue existiendo incluso si el transporte no existe y la clase base necesita accesar a los datos de la clase transporte. Por otro lado, la clase transporte es una clase abstracta de la cual parten otras clases tales como Aéreo, Marítimo, Terrestre las cuales heredan a otras subclases con otros atributos.


# Consideraciones

Este programa no toma en cuenta la ubicación del destino a donde se quiere llegar, por lo que la elección del transporte sólo se limita por la capacidad de carga y si cuenta con permiso para transportar cargas con materiales peligrosos (Hazmat). Otra limitación en esta versión es que no se puden crear múltiples cargas. Asimismo, en caso de que no exista un transporte con la capacidad necesaria, se lanzará un mensaje al usuario indicando que la Empresa no cuenta con transportes que cumplan esos requisitos.

