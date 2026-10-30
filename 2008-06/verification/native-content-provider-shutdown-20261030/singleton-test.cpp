#include "util/ContentProvider.h"
#include <cstdio>
#include <windows.h>
int main() {
 std::fprintf(stderr,"before singleton\n"); std::fflush(stderr);
 RBX::ContentProvider& provider=RBX::ContentProvider::singleton();
 std::fprintf(stderr,"after singleton\n"); std::fflush(stderr);

 bool bad=provider.isUrlBad("https://invalid.example/never-requested");
 std::fprintf(stderr,"after URL check: %d\n",bad); std::fflush(stderr);
 return bad ? 1 : 0;
}

