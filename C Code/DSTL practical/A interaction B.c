#include<stdio.h>
int removerepeated(int size,int a[]);
void sort(int size,int a[]); 
int main(){
   int i,size1,size2,size,j=0,k,intersectionsize;
   printf("Enter size of an array1\n");
   scanf("%d",&size1);
   printf("Enter size of an array2\n");
   scanf("%d",&size2);
   int a[size1],b[size2],uni[size1+size2];
   if(size1<size2){
      intersectionsize=size1;
   }else if(size1>size2){
      intersectionsize=size2;
   }else{
      intersectionsize=size1;
   }
   int intersection[intersectionsize];
   printf("Enter numbers for array 1\n");
   for(i=0;i<size1;i++){
      scanf("%d",&a[i]);
   }
   printf("Enter numbers for array 2\n");
   for(i=0;i<size2;i++){
      scanf("%d",&b[i]);
   }
   //Intersection starts
   k=0;
   for(i=0;i<size1;i++){
      for(j=0;j<size2;j++){
         if(a[i]==b[j]){
            intersection[k]=a[i];
            k++;
         }
      }
   }
   //Sorting
   sort(k,intersection);
   //Removing
   size=removerepeated(k,intersection);
   printf("Array after intersection\n");
   if(size>0){
      for(i=0;i<size;i++){
         printf("%d\n",intersection[i]);
      }
   }else{
      printf("No intersection\n");
   }
}
int removerepeated(int size,int a[]){
   int i,j,k;
   for(i=0;i<size;i++){
      for(j=i+1;j<size;){
         if(a[i]==a[j]){
            for(k=j;k<size;k++){
               a[k]=a[k+1];
            }
            size--;
         }else{
            j++;
         }
      }
   }
   return(size);
}
void sort(int size,int a[]){
   int i,j,temp;
   for(i=0;i<size;i++){
      for(j=i+1;j<size;j++){
         if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
}