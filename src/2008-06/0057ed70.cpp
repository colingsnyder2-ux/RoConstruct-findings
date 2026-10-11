// from server: 55% by atomic.potato
struct S {
    void __cdecl f(int* first, int* last, int* out, void (__cdecl *fn)(int, int));
};

void S::f(int* first, int* last, int* out, void (__cdecl *fn)(int, int)) {
    while (first != last) {
        int v = *first;
        fn(v, out[0]);
        first++;
    }
    out[0] = (int)first;
    out[1] = (int)last;
}
