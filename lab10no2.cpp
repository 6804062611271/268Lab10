#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int score;
	char name[50];
} Student;

void addStudent(Student *record, char *name, int score);

int main() {
	Student stuRecord[20]; int numStudent, i;
	addStudent(&stuRecord[0], "Sandking", 65);
	addStudent(&stuRecord[1], "Anti-mage", 72);
	addStudent(&stuRecord[2], "Sniper", 40);
	addStudent(&stuRecord[3], "Tiny", 93); 
	addStudent(&stuRecord[4], "Axe", 60);
	numStudent = 5;
	
	for(i = 0; i < numStudent; i++) {
		if(stuRecord[i].score >= 80){
			printf("%s Score %d : Very Good\n", stuRecord[i].name, stuRecord[i].score);
		}
		
		else if(stuRecord[i].score >= 60){
			printf("%s Score %d : Good\n", stuRecord[i].name, stuRecord[i].score);
		}
		
		else{
			printf("%s Score %d : keep trying\n", stuRecord[i].name, stuRecord[i].score);
		}
	}
	return 0;
}

void addStudent(Student *record, char *name, int score) {
	strcpy(record->name, name); 
	record->score = score;
}

