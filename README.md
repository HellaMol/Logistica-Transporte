# Proyecto: Lógistica de Transporte

Helena Molina Jiménez
A01706282
Este proyecto tiene por objetivo crear un prototipo de un programa para una empresa dedicada a la logísitca de comercio, en el cual según las características del cargamento que deban transportar, el código indique el o los transportes con la capacidad para trasladar el cargamento, facilitando así la toma de desiciones.

# Diagrama UML

En el UML se puede observar que la clase carga tiene una relación de agregación a la clase transporte, ya que esta sigue existiendo incluso si el transporte no existe y la clase transporte necesita accesar a los datos de la clase carga. Por otro lado, la clase transporte es una clase abstracta de la cual parten otras clases tales como Aéreo, Marítimo, Terrestre las cuales heredan a otras subclases otros atributos.


# Consideraciones

Este programa no toma en cuenta la ubicación del destino a donde se quiere llegar, por lo que la elección del transporte sólo se limita por la capacidad de carga y si cuenta con permiso para transportar cargas con materiales peligrosos (Hazmat). Otra limitación en esta versión es que no se puden crear múltiples cargas. Asimismo, en caso de que no exista un transporte con la capacidad necesaria, se lanzará un mensaje al usuario indicando que la Empresa no cuenta con transportes que cumplan esos requisitos.

