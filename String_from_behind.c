int main()
{
   //Edit below this line
   int i;
   char c[51]; //String of max len 51
   scanf("%s",c); //Input
   i = strlen(c);
   
   for(int j=i-1; c[j]; j--){ // j points to last char in string, checks if c[j] is true
       printf("%s\n",c+j); //Print by decrementing the pointer
   }
   

    return 0; 
}
