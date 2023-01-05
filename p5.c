#include <stdio.h>
int main()

{         

    int i,num,s,flag=0;

    int a[10];

    printf("How many elements you want to enter :  ");

    scanf("%d",&num);

    printf("Enter %d elements in the Array: ", num);

    for(i=0; i<num; i++){

    	scanf("%d",&a[i]);

	}

	printf("Enter the Element you to Search : ");

	scanf("%d",&s);

	for(i=0; i<num; i++){

		if(a[i]==s){

			flag=1;

			break;

		}

	} 

	if (flag==0){

		printf("-1");

	}else {

		printf("Element Found\n");

		for(i=0; i<num; i++){

			if(a[i]==s)

			{

				printf("%d is Present at Location %d \n",s,i);

				break;

			}

		}

	}



  return 0;

} 
