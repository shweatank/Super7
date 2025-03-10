/*Function Table:
Create a function table containing pointers to different functions. Use this table to invoke the appropriate function based on an input value.
3. Sorting with Function Pointers:
*/
#include <stdio.h>
typedef enum {
    ADD,
    SUB,
    MUL,
    DIVE
} FunctionType;
typedef struct {
    void (*fp[4])(int, int);
} Func;
void add(int a, int b) {
    printf("The sum = %d\n", a + b);
}

void sub(int a, int b) {
    printf("The difference = %d\n", a - b);
}

void mul(int a, int b) {
    printf("The product = %d\n", a * b);
}

void dive(int a, int b) {
    if (b != 0) {
        printf("The division = %d\n", a / b);
    } else {
        printf("Division by zero error\n");
    }
}

int main() {
    Func func;
    func.fp[ADD] = add;
    func.fp[SUB] = sub;
    func.fp[MUL] = mul;
    func.fp[DIVE] = dive;
    int a = 10, b = 5;
    func.fp[ADD](a, b);  
    func.fp[SUB](a, b);  
    func.fp[MUL](a, b);  
    func.fp[DIVE](a, b);
    
    return 0;
}

