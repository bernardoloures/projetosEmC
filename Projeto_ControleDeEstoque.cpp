#include <stdio.h>

int main(){
	
	int estoq_1, estoq_2, opcao = 999, opcao_empresa, tij_entradaks, tij_saidaks, tij_transfks, tij_entradapj, tij_saidapj, tij_transfpj;
	
	printf("Entre com o estoque inicial de Tijolos (Tijolos KS): \n");
	scanf("%d", &estoq_1);
	
	printf("Entre com o estoque inicial de Tijolos (Tijolos Paraju): \n");
	scanf("%d", &estoq_2);
	
	while (opcao != 5){
		
		if(opcao != 5){
			printf("\n O que deseja fazer: \n 1 - Entrada de Estoque \n 2 - Saida de Estoque \n 3 - Transferencia de Estoque \n 4 - Consulta de Estoque \n 5 - Finalizar \n");
			scanf("%d", &opcao);
				if (opcao == 1){
					printf("\n Qual Empresa: \n 1 - Tijolo KS \n 2 - Tijolo Paraju \n");
					scanf("%d", &opcao_empresa);
						if (opcao_empresa == 1){
							printf("\n Qual a quantidade de Entrada de Tijolos em Tijolos KS: \n");
							scanf("%d", &tij_entradaks);
							estoq_1 = estoq_1 + tij_entradaks;
							printf("\n Estoque Atualizado em Tijolos KS -> %d unidades \n", estoq_1);			
						}	
						else if (opcao_empresa == 2){
							printf("\n Qual a quantidade de Entrada de Tijolos em Tijolos Paraju: \n");
							scanf("%d", &tij_entradapj);
							estoq_2 = estoq_2 + tij_entradapj;
							printf("\n Estoque Atualizado em Tijolos Paraju -> %d unidades \n", estoq_2);
						}
				}
				else if (opcao == 2){
					printf("\n Qual Empresa: \n 1 - Tijolos KS \n 2 - Tijolos Paraju \n");
					scanf("%d", &opcao_empresa);
						if (opcao_empresa == 1){
							printf("\n Qual a quantidade de Saida de Tijolos em Tijolos KS: \n");
							scanf("%d", &tij_saidaks);
							estoq_1 = estoq_1 - tij_saidaks;
							printf("\n Estoque Atualizado em Tijolos KS -> %d unidades \n", estoq_1);
						}
						else if (opcao_empresa == 2){
							printf("\n Qual a quantidade de Saida de Tijolos em Tijolos Paraju: \n");
							scanf("%d", &tij_saidapj);
							estoq_2 = estoq_2 - tij_saidapj;
							printf("\n Estoque Atualizado em Tijolos Paraju -> %d unidades \n", estoq_2);
						}
				}
				else if (opcao == 3){
					printf("\n Qual Empresa: \n 1 - Tijolos KS -> Tijolos Paraju \n 2 - Tijolos Paraju -> Tijolos KS \n");
					scanf("%d", &opcao_empresa);
						if (opcao_empresa == 1){
							printf("\n Quantidade de transferencia de Tijolos - Tijolos KS para Tijolos Paraju -> \n ");
							scanf("%d", &tij_transfks);
								if (estoq_1 < tij_transfks){
									printf("\n Impossivel transferir de Tijolos KS para Tijolos Paraju, estoque insuficiente! \n");
									printf("\n Estoque Atualizado em Tijolos KS -> %d unidades \n", estoq_1);
									printf("\n Estoque Atualizado em Tijolos Paraju -> %d unidades \n}", estoq_2);
								}
								else if (estoq_1 >= tij_transfks){
									printf("\n Transferencia realizada! \n");
									estoq_2 = estoq_2 + tij_transfks;
									estoq_1 = estoq_1 - tij_transfks;
									printf("\n Estoque Atualizado em Tijolos KS -> %d unidades \n", estoq_1);
									printf("\n Estoque Atualizado em Tijolos Paraju -> %d unidades \n", estoq_2);
								}
						}
						else if (opcao_empresa == 2){
							printf("\n Quantidade de transferencia de Tijolos - Tijolos Paraju para Tijolos KS -> \n");
							scanf("%d", &tij_transfpj);
								if (tij_transfpj > estoq_2){
									printf("\n Impossivel transferir de Tijolos Paraju para Tijolos KS, estoque insuficiente! \n");
									printf("\n Estoque Atualizado em Tijolos KS -> %d unidades \n", estoq_1);
									printf("\n Estoque Atualizado em Tijolos Paraju -> %d unidades \n", estoq_2);
								}
								else if (tij_transfpj <= estoq_2){
									printf("\n Transferencia realizada! \n");
									estoq_1 = estoq_1 + tij_transfpj;
									estoq_2 = estoq_2 - tij_transfpj;
									printf("\n Estoque Atualizado em Tijolos KS -> %d unidades \n", estoq_1);
									printf("\n Estoque Atualizado em Tijolos Paraju -> %d unidades \n", estoq_2);
								}
						}
					
				}
				else if (opcao == 4){
					printf("\n Estoque em Tijolos KS -> %d unidades \n", estoq_1);
					printf("\n Estoque em Tijolos Paraju -> %d unidades \n", estoq_2);
				}
		}
	}
}
