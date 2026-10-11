// from server: 71% by atomic.potato
struct Elem {
    void* p;
    char pad[0x24];
};

struct S {
    void __cdecl f(Elem* first, Elem* last);
};

void S::f(Elem* first, Elem* last) {
    while (first != last) {
        void** p = (void**)first->p;
        if (p != 0) {
            void (*fn)(void*, void*, int) = (void (*)(void*, void*, int))p[0];
            if (fn != 0) {
                fn(&first->p, &first->p, 2);
            }
            first->p = 0;
        }
        first = (Elem*)((char*)first + 0x28);
    }
}
