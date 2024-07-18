void push();
int pop();
int pop(int x)
{
x--;
return x;
}


void push()
{
int arrr[50],i,n,x,t;
printf("Enter n: \n");
scanf("%d",&n);
printf("Enter elements of array: \n");
for(i=0;i<n;i++)
{
scanf("%d",&arrr[i]);
}


printf("Enter the element to push: \n");
scanf("%d",&x);

arrr[n]=x;

printf("Pushed array is: ");
for(i=0;i<=n;i++)
{
printf("%d ",arrr[i]);
}

}




