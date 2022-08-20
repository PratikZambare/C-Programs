#include<stdio.h>
int twowheel(int two)
{
    int p;
    printf("How many passengers do you have : ");
    scanf("%d",&p);
    if(p>2)
    {
        p=((p-2)*10+two);
        return p;
    }
    else
    {
        return two;
    }
}
int threewheel(int three)
{
    int p;
    printf("How many passengers do you have : ");
    scanf("%d",&p);
    if(p>3)
    {
        p=((p-3)*20+three);
        return p;
    }
    else
    {
        return three;
    }
}
int fourwheel(int four)
{
    int p;
    printf("How many passengers do you have : ");
    scanf("%d",&p);
    if(p>4)
    {
        p=((p-4)*40+four);
        return p;
    }
    else
    {
        return four;
    }
}
int sixwheel(int six)
{
    int p;
    printf("How many passengers do you have : ");
    scanf("%d",&p);
    if(p>6)
    {
        p=((p-6)*100+six);
        return p;
    }
    else
    {
        return six;
    }
}
int main()
{
	int vt,total;
	int two=20,three=30,four=40,six=60;
	printf("which vehicle do you have :\n1.Two Wheeler: \n2.Three Wheeler: \n3.Four Wheeler: \n4.Six Wheeler:\nEnter Your choice : ");
	scanf("%d",&vt);
	if(vt==1)
	{
		total=twowheel(two);
		printf("Your total tax for the Two wheeler is : %d",total);
	}
	else if(vt==2)
	{
		total=threewheel(three);	
		printf("Your total tax for the Three wheeler is : %d",total);
	}
	else if(vt==3)
	{
		total=fourwheel(four);
		printf("Your total tax for the Four wheeler is : %d",total);
	}
	else if(vt==4)
	{
		total=sixwheel(six);
		printf("Your total tax for the Six wheeler is : %d",total);
	}
	else{
		printf("You entered wrong choice :\nPlease enter the correct choice : \n");
		return main();

	}

}