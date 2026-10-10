// from server: 70% by why2
struct S {
    void f();
};

void S::f()
{
    int* p = *(int**)((char*)this + 0xc);
    if (p != 0) {
        void** vtbl = *(void***)p;
        void (__stdcall *fn)(int) = (void (__stdcall *)(int))vtbl[6];
        fn(1);
    }
}
