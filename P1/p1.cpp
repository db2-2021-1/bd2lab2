#include <iostream>
#include <vector>

struct Registro{
    char codigo [5];
    char nombre [20];
    char carrera [15];
    int ciclo;
};

class seqFile{
private:
    std::vector<Registro> *regVec;
public:
    seqFile(){regVec = new std::vector<Registro>;}

    /**TODO:
    * P1.a)
    * Algoritmo de  inserciónen bloque el cual recibe  como parámetros una lista  de registros que
    * deben ser guardados en un archivo de forma ordenada. Para ello seleccione el campo nombre como
    * campo de ordenación (search-key).
    */
    void insertAll(std::vector<Registro> insertVec){

    }

    /**TODO:
    * P1.b)
    * Algoritmo  de  búsqueda puntual dado  una  clave  de  búsqueda(se  puede  obtener  más  de  un registro):
    */
    std::vector<Registro> search(std::string key){

    }

    /**TODO:
     * P1.c)
     * Algoritmo de búsqueda por rango entre dos claves de búsqueda:
     */
     std::vector<Registro> search(std::string begin, std::string end){

     }

     /**TODO:
      * Algoritmo para  agregar un  nuevo  registro al  archivo. Debe  utilizar  un espacio auxiliar  para guardar
      * los  nuevos  registros. Cuando  el espacio auxiliar  llegue  a K registros, aplique  un algoritmo de
      * reconstrucción del archivo de datosmanteniendo el orden físico de acuerdo al campo nombre. Asegúrese
      * de mantener los punteros actualizados.
      */
     void addRegister(Registro registro){

     }

     /**TODO:
      * Proponga una estrategia de eliminación
      */
     bool deleteRegister(std::string key){

     }
};

int main(){
    return 0;
}