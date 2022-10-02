#include <stdio.h>
#include<string.h>
int movedice(char oper);
int up = 1, down = 6, front = 2, back = 5, left = 3, right = 4;
int main() {
    char operin[100];
    int check = 0;
    scanf_s("%s",operin,sizeof(operin));
    for (int i = 0; i <strlen(operin); i++) 
    {
        check = check+movedice(operin[i]);
        if (i == strlen(operin) - 1&& check==0) {
            printf("%d", up);
        }
        else if (i == strlen(operin) - 1) {
            printf("wrong!");
        }
    }
    return 0;
}
int movedice(char oper) {
    int buff = 0;
    switch (oper) {
    case 'F':
        buff = up;
        up = back;
        back = down;
        down = front;
        front = buff;
        return 0;
        break;
    case 'B':
        buff = up;
        up = front;
        front = down;
        down = back;
        back = buff;
        return 0;
        break;
    case 'L':
        buff = up;
        up =right;
        right = down;
        down = left;
        left = buff;
        return 0;
        break;
    case 'R':
        buff = up;
        up = left;
        left = down;
        down = right;
        right = buff;
        return 0;
        break;
    case 'C':
        buff = left;
        left = front;
        front = right;
        right = back;
        back = buff;
        return 0;
        break;
    case 'D':
        buff = right;
        right = front;
        front = left;
        left = back;
        back = buff;
        return 0;
        break;
    default:
        return 1;
    }
}