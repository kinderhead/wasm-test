#include <stdio.h>
#include <string>
#include <emscripten.h>
#include <emscripten/val.h>

using namespace std;
using namespace emscripten;

int main() {
    printf("hello, world!\n");

    val document = val::global("document");

    val div = document.call<val>("createElement", val("div"));
    val content = document.call<val>("createTextNode", val("Hello from C++!"));

    div.call<void>("appendChild", content);
    document["body"].call<void>("appendChild", div);
    
    return 0;
}

extern "C" {

int EMSCRIPTEN_KEEPALIVE test() {
    printf("test");
    return 5;
}

}