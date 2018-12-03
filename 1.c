#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    FILE *fp;
    fp = fopen("vhod.txt", "r");
    

    int j, k, i=1;
    char str[50];
    char * pr;
    char *sr, *ss, *sp, *sv, *su, *sh, *sw;
    double s, p, v, r, u;
    int h, w;
    

    if (fp == NULL)     printf("Ошибка открытия файла");
    
    

    pr = (char*) malloc(12*sizeof(char));
    sr = (char*) malloc(12*sizeof(char));
    ss = (char*) malloc(12*sizeof(char));
    sp = (char*) malloc(12*sizeof(char));
    su = (char*) malloc(12*sizeof(char));
    sv = (char*) malloc(12*sizeof(char));
    sh = (char*) malloc(12*sizeof(char));
    sw = (char*) malloc(12*sizeof(char));
    


    fgets(str, 50, fp); 
    pr=str; 
    k=0;
    j=6;
    while(pr[j]!='\n'){
        sr[k]=pr[j]; 
        j++;
        k++;
    }
    r=atof(sr);     
    //printf("%lf\n", r); 
            
            

    fgets(str, 50, fp); 
    pr=str; 
    k=0;
    j=8;
    while(pr[j]!='\n'){
        ss[k]=pr[j]; 
        j++;
        k++;
    }
    s=atof(ss);     
    //printf("%lf\n", s); 
            


    fgets(str, 50, fp); 
    pr=str; 
    k=0;
    j=11;
    while(pr[j]!='\n'){
        sp[k]=pr[j]; 
        j++;
        k++;
    }
    p=atof(sp);     
    //printf("%lf\n", p); 
            


    fgets(str, 50, fp); 
    pr=str; 
    k=0;
    j=4;
    while(pr[j]!='\n'){
        su[k]=pr[j]; 
        j++;
        k++;
    }
    u=atof(su);     
    //printf("%lf\n", u); 



    fgets(str, 50, fp); 
    pr=str; 
    k=0;
    j=4;
    while(pr[j]!='\n'){
        sv[k]=pr[j]; 
        j++;
        k++;
    }
    v=atof(sv);     
    //printf("%lf\n", v); 
            
            
            
    fgets(str, 50, fp); 
    pr=str; 
    k=0;
    j=9;
    while(pr[j]!='\n'){
        sh[k]=pr[j]; 
        j++;
        k++;
    }
    h=atoi(sh);     
    //printf("%lf\n", h); 



    fgets(str, 50, fp); 
    pr=str; 
    k=0;
    j=8;
    while(pr[j]!='\n'){
        sw[k]=pr[j]; 
        j++;
        k++;
    }
    w=atoi(sw);     
    //printf("%lf\n", w); 


    /*На выходе получаем 
        rho = r
        speed = s
        pressure = p
        u = u
        v = u
    в формате дабл и 
        height = h
        width = h
    в формате инт
    
    для наглядности выыожу кол-во узлов в решетке (h*w) и скорость звука в среде пополам (s/2) 
    */
    printf("%d %lf\n", h*w, s/2);



   
    return 0;


}
