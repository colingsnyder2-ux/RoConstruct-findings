// from server: 88% by sophus
struct S {
};

double __cdecl f(void* p) {
    void** v = (void**)p;
    void* a = v[1];
    void* (*fn)(void*) = (void* (*)(void*))v[0];
    void* r = fn(a);
    return *(double*)r;
}
