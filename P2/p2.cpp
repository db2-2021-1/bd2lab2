#include <iostream>
#include <vector>

struct Registro{
    char codigo [5];
    char nombre [20];
    char carrera [15];
    int ciclo;
};

class sparseIndexFile{
private:

public:

    sparseIndexFile(){};

    /**TODO:
     * P2.a)
     * Algoritmo para insertar un nuevo registro
     * */
     void add(Registro registro){

     }

     /**TODO:
      * P2.b)
      * Implementar funcion de busqueda
      * */
      std::vector<Registro> search(std::string key){

      }

      /**TODO:
       * P2.c)
       * Implemente la busqueda por rango
       * */
       std::vector<Registro> search(std::string beginKey, std::string endKey){
           
       }
};

int main(){
    return 0;
}