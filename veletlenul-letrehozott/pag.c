#include <stdio.h>
#include <math.h>

void
PageRankKiiras (double tomb[], int db)
{
int i;
for (i=0; i<db; i++)
printf("PageRank [%d]: %lf\n", i+1, tomb[i]);
}

double tavolsag(double pr[],double pr_temp[],int db)
{
double tav = 0.0;
int i;
for(i=0;i<db;i++)
tav +=(pr[i] - pr_temp[i])*(pr[i] - pr_temp[i]);

return sqrt (tav);
}

int main(void)
{
double Lapok[4][4] = {
{1.0/2.0, 0.0, 	1.0/3.0, 	0.0},
{0.0, 1.0/3.0, 	1.0/3.0,	1.0},
{0.0, 1.0/3.0, 	0.0, 		0.0},
{1.0/2.0, 1.0/3.0, 	1.0/3.0,	0.0}
};

double PageRank[4] = {0.0, 0.0, 0.0, 0.0};
double Temp_PageRank[4] = {1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0};

long int i,j;
i=0; j=0;

for (;;)
{
for(i=0;i<4;i++)
PageRank[i] = Temp_PageRank[i];
for (i=0;i<4;i++)
{
double temp=0;
for (j=0;j<4;j++)
temp+=Lapok[i][j]*PageRank[j];
Temp_PageRank[i]=temp;
}

if ( tavolsag(PageRank,Temp_PageRank, 4) < 0.000001)
break;
}
PageRankKiiras (PageRank,4);
return 0;

} 

