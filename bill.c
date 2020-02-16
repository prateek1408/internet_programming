#include<stdio.h>
#include<string.h>
void main(){
  FILE *fptr;
  char name[20];
  int idno;
  float price, tax,  final_price;
  
  fptr = fopen("index.html" , "w");
  if(fptr == NULL){
    printf("File not found!!!");
    return;
  }
  fprintf(fptr,"<html><body>");	
  
  printf("Enter the customer id: ");
  scanf("%d",&idno);
  
  
  printf("Enter your name : ");
  scanf("%s", name);
  
  printf("Enter the bill amount : ");
  scanf("%f", &price);
  tax = price*0.18;
  final_price = price + tax;
  printf("\nThank you for visiting!\nYou can collect your bill now....");
  
 /* printf("/nPrice : %f ", price);
  printf("/nFinal price : %f", final_price);*/
  fprintf(fptr,"<center><b>Customer Id. :  %d</b></center><br>", idno);
  fprintf(fptr,"<table style=\"width:100%\" border = 1 cellpadding = 20 align = \"center\"><tr><th>Name:</th><td>%s</td></tr><tr><th rowspan=\"2\">Amount:</th><td>%.3f</td></tr><tr><td>+%.2f(tax)</td></tr>", name, price, tax); 
  fprintf(fptr,"<tr><th>Total:</th><td>%.3f</td></tr></table></body></html>", final_price);
  fclose(fptr);
}
