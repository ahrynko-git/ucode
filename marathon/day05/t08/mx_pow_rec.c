// #include <stdio.h>

double mx_pow_rec(double n, unsigned int pow){
    if (pow == 1)
        return n;
    return n * mx_pow_rec(n, pow - 1);
}
/*
int main(){
    printf("%f\n", mx_pow_rec(2, 3));
    return 0;
}
*/
