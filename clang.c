#include <stdio.h>
#include <stdlib.h>
	/* A program that accepts input form the user, and prints the scores of five students after taking a test on 10 subjects.
	   expected output is individaul name of the students, the subjects, score on each subject and average of score each student.

Name: Nmasi miriam

subject				score
English 			80
Mathematics 			90
Chemistry 			80
Physics 			80
Biology 			70
Economics 			60
Government 			100
c.r.k 				70
Literature-in-english 		80
Commerce 			70

Total				780/10


Name: Ekene Thompson

subject                         score
English                         80
Mathematics                     90
Chemistry                       80
Physics                         80
Biology                         70
Economics                       60
Government                      100
c.r.k                           70
Literature-in-english           80
Commerce                        70

Total                           780/10


Name: Vivian okeke
 
subject                         score
English                         80
Mathematics                     90
Chemistry                       80
Physics                         80
Biology                         70
Economics                       60
Government                      100
c.r.k                           70
Literature-in-english           80
Commerce                        70

Total                           780/10

Name: Ekpereamaka blessing

subject                         score
English                         80
Mathematics                     90
Chemistry                       80
Physics                         80
Biology                         70
Economics                       60
Government                      100
c.r.k                           70
Literature-in-english           80
Commerce                        70

Total                           780/10


Name: Ike joshua

subject                         score
English                         80
Mathematics                     90
Chemistry                       80
Physics                         80
Biology                         70
Economics                       60
Government                      100
c.r.k                           70
Literature-in-english           80
Commerce                     	70

Total                        780/10
 */
 int main()
{
	int i=0;
	int j=0;
	int score[5][10];
	char subjects[10][20];
	char student_name[5][20];

for(i=0;i<5;i++)
{
	printf("Enter student's name:");
	scanf("%s", student_name[i]);

for(j=0;j<10;j++)
{
		printf("Enter subject:");
		scanf("%s", subjects[j]);
		printf("Enter score:");
		scanf("%d", &score[i][j]);
}
	printf("\n");

}

for(i=0;i<5;i++)
{
	printf("Name: %s\n", student_name[i]);
	printf("\n");
	printf("Subject\t\t\t\tScore\n");

for(j=0;j<10;j++)
{
	printf("%s\t\t\t\t%d\n", subjects[j],score[i][j]);
}
	printf("\n");
}
	return (0);
}
