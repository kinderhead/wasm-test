#include <stdio.h>
#include <string>
#include <emscripten.h>
#include <emscripten/val.h>

using namespace std;
using namespace emscripten;

int main() {
    printf("Hello from C++!\n");

    /*
    val document = val::global("document");

    val div = document.call<val>("createElement", val("div"));
    val content = document.call<val>("createTextNode", val("Hello from C++!"));

    div.call<void>("appendChild", content);
    document["body"].call<void>("appendChild", div);
    
    for (int i = 0; i < 50; i++)
    {
        printf("%d\n", i);
    }
    */

    return 0;
}

extern "C" {

int EMSCRIPTEN_KEEPALIVE test() {
    printf("test");
    return 5;
}

}