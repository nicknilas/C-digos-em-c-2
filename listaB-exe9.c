#include <stdio.h>
#include <stdlib.h>

float main (void)
{ 
    float n1,n2,n3, media;
    printf("Digite o primeiro numero:");
    scanf("%f",&n1);
    printf("Digite o segundo numero:");
    scanf("%f",&n2);
    printf("Digite o terceiro numero:");
    scanf("%f",&n3);
    
    media=(n1+n2+n3)/3;
    printf("Essa sera sua Media:%f", media);
    
    system("pause");
    return 0;
}
