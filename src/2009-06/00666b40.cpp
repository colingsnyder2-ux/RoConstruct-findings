// from server: 63% by why2
struct S {
    void f(void*);
};

void S::f(void* p)
{
    if (p) {
        void** vtable = *(void***)p;
        void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vtable[6];
        fn(p, 1);
    }
}
