template <typename Tipo>
struct ListaLinear{
int tamanho;//quantidade de lugares, tamanho da lista
Tipo *lista;
int p;//posições

ListaLinear(int tam){
  tamanho = tam;
  lista = new int[tamanho]; 
  p = -1;
}

void compra(Tipo x){
  p++;
  lista[p]=x;
}

void devolve(){
  p--;
}

Tipo ultimoassento(){
  return lista[p];
}

Tipo primeiroassento(){
  return lista[0];
}

bool lotado(){
  return p == tamanho-1;
}

bool vazio(){
  return p == -1;
}

};