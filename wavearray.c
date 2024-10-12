#include <stdio.h>
int main() {
    int arr[40],  array_size;
        int  i, j, t;
     printf("enter the size of array: \n");
     scanf("%d",&array_size);
    printf("enter the elements of the array: \n");
    for( i=0; i<array_size; i++){
        scanf("%d",&arr[i]);
    }
    for( i=0;  i<array_size-1;  i++) {
    	for( j=i+1; j<array_size; j++) {
    		if(arr[i]>arr[j]) {
    			         	 t=arr[i];
    	    	        arr[i]=arr[j];
    	       	      arr[j]=t;
    	 	}
      	}
    }
    	     
    printf("Shorted Array is\n");
    for( i=0; i<array_size; i++) {
        printf("%d\n",arr[i]);
    }
    			  return 0;
}