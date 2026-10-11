// from server: 57% by atomic.potato
struct S {
};

void __cdecl f(char* p, char* end, void (*fn)(void*), char** out, char* a, char* b) {
    while (p != end) {
        fn(p + 8);
        p = *(char**)p;
    }
    out[0] = a;
    out[1] = b;
}
