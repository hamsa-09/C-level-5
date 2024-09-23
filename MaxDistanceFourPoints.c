# include<stdio.h>
#include<string.h>
# include<math.h>


double maxdistance(double x1,double y1,double x2,double y2)
{
    double result =sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return result;
}

int main()
{
    double x[4];
    double y[4];

    for(int i = 0; i<4;i++)
    {
        scanf("%lf %lf",&x[i],&y[i]);
    }

 double max = 0;
 for(int i = 0;i<4;i++)
 {
    for(int j = i+1;j<4;j++)
    {
        double value = maxdistance(x[i],y[i],x[j],y[j]);
        if(value>max)
        {
            max = value;
        }
    }
 
 }
    printf("%lf ",max);
}