#include <stdio.h>
#include <string.h>
struct HelloWorld{
    char hello[30];
    char world[30];
};

int main(){
    struct HelloWorld helloworld;
    strcpy(helloworld.hello, "Hello");
    strcpy(helloworld.world, "world");
    printf("%s %s!",helloworld.hello,helloworld.world);
}
