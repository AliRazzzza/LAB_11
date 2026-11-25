#include <stdio.h>
#include <stdlib.h>
int main(){
    int *students;
    int n, extra, i;
    int total;

    printf("Enter number of students who want to register: ");
    scanf("%d", &n);
    students =(int*) malloc(n *sizeof(int));

    if(students == NULL){
        printf("Memory not allocated\n");
        return 1;
    }
    for(i = 0; i<n; i++){
        printf("Enter registration number of student %d: ", i+1);
        scanf("%d", &students[i]);
    }
    printf("\nRegistered students after first phase:\n");
    for (i = 0; i<n; i++) {
        printf("%d\n", students[i]);
    }

    printf("\nHow many more students want to register: ");
    scanf("%d", &extra);
    total = n + extra;
    students = (int*) realloc(students, total * sizeof(int));
    if (students==NULL){
        printf("Memory not allocated\n");
        return 1;
    }

    for(i= n; i< total;i++){
        printf("Enter registration number of student %d: ",i+1);
        scanf("%d", &students[i]);
    }
    printf("\nAll registered students after second phase:");
    for(i =0; i < total;i++){
        printf("%d\n", students[i]);
    }

    free(students);
    return 0;
}
