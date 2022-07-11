//It was Raj's first day at school. His teacher asked the students to meet every other student in the class and to introduce themselves. The teacher asked them to give handshakes when they meet each other. If there are ‘n’ number of students in the class then find the total number of handshakes made by the students.

prgm:
#include <stdio.h>

int main()
{
    int n,total;
    printf("no of handshake");
    fflush(stdout);
    scanf("%d",&n);
    total = n*(n-2)/2;
    printf("%d",total);
}
