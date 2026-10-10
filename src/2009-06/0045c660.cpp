// from server: 78% by why2
struct S {
    double f(void*);
};

double S::f(void* p) {
    void** v = (void**)p;
    void* a = v[1];
    void* (*fn)(void*) = (void* (*)(void*))v[0];
    void* r = fn(a);
    return *(double*)r;
}
