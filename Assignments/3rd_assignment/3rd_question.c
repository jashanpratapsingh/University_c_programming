#include <stdio.h>

double findMin(double arr[], int size) {
    double min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    double quizGradesA[] = {9.5, 6, 4, 10, 7.8, 3.4, 9, 5.6, 9, 10};
    double quizGradesB[] = {9.5, 8.4, 9, 10, 7.8, 10, 9, 9.6, 9, 10};
    double quizGradesC[] = {8.5, 8.5, 9, 8.5, 7.5, 7, 9, 9.5, 10, 10};
    double midtermGrade[] = {73, 89, 80};
    double finalExamGrade[] = {84, 81, 70};

    for (int i = 0; i < 3; i++) {
        double quizMin = findMin((i == 0 ? quizGradesA : (i == 1 ? quizGradesB : quizGradesC)), 10);
        double quizSum = 0;
        for (int j = 0; j < 10; j++) {
            quizSum += (i == 0 ? quizGradesA[j] : (i == 1 ? quizGradesB[j] : quizGradesC[j]));
        }
        double quizAverage = (quizSum - quizMin) / 9;

        double midterm = midtermGrade[i];
        double finalExam = finalExamGrade[i];
        double midtermWeight, finalExamWeight;

        if (midterm >= finalExam) {
            midtermWeight = 0.35;
            finalExamWeight = 0.40;
        } else {
            midtermWeight = 0.25;
            finalExamWeight = 0.50;
        }

        double finalGrade = quizAverage * 0.25 + midterm * midtermWeight + finalExam * finalExamWeight;

        printf("For scenario %c: Final grade is %.2f\n", 'a' + i, finalGrade);
    }

    return 0;
}