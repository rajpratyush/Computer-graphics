#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, arr[10], x;
    char s[200],a[10];
    scanf("%s",&s);
    for(i=0;i<10;i++){
        arr[i]=0;
        a[i]=i;
    }
    x=strlen(s);
    for(i=0;i<x;i++){
	if(strcmp(a[0],s[i])==0)
	    arr[0]+=1;
	else if(strcmp(a[1],s[i])==0)
	    arr[1]+=1;
	else if(strcmp(a[2],s[i])==0)
	    arr[2]+=1;
	else if(strcmp(a[3],s[i])==0)
	    arr[3]+=1;
	else if(strcmp(a[4],s[i])==0)
	    arr[4]+=1;
	else if(strcmp(a[5],s[i])==0)
	    arr[5]+=1;
	else if(strcmp(a[6],s[i])==0)
	    arr[6]+=1;
	else if(strcmp(a[7],s[i])==0)
	    arr[7]+=1;
	else if(strcmp(a[8],s[i])==0)
	    arr[8]+=1;
	else if(strcmp(a[9],s[i])==0)
            arr[9]+=1; 
        else 
            continue;             
    }
    for(i=0;i<10;i++){
        printf("%d",arr[i]);
    }   
    return 0;
}
