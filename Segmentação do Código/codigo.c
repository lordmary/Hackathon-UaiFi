//Código em C para a verificação do sinal e a comparação entre eles: 
int signal;
int main(){
    printf("\n Digite o valor do sinal(dBm): ");
    scanf("%d", &signal);   
    printf("\n -------------- RESULTADO --------------\n");
    //[-infinito até -81]
    if(signal < -80) {
        printf("\n Sinal inutilizavel"); 
    }

    // [-80 até -71]
    else if(signal < -70){
        printf("\n Sinal fraco");
    }

    // [-70 até -68]
    else if(signal < -67){
        printf("\n Sinal bom");
    }

    // [-67 até -31]
    else if(signal < -30){
        printf("\n Sinal muito bom");
    }

    // [-30 pra cima]
    else printf("\n Sinal excelente");
    
    printf("\n\n -------------------------------------");
}