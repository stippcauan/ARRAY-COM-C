#include <stdio.h>

int main(){
    char produto[50]; // Guardar o nome do produto
    float preco;      // Preço unitário
    int quantidade;   // Quantidade comprada
    float total;      // valor total da compra

    printf("Digite o nome do produto: ");
    scanf("%s", produto);

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d",&quantidade);

    total = preco * quantidade;

    printf("Produto: %s\n", produto);
    printf("Preço = %f\n",preco);
    printf("Quantidade: %d\n", quantidade );
    printf("Total: %.2f\n", total);

    return 0;
}