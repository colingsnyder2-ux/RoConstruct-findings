// from server: 30% by tester
struct S {
    int f(int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" void* __stdcall func_006a0920(unsigned int);
extern "C" bool __stdcall func_0060a2f0(void*);
extern "C" void __stdcall func_0055f6a0(void*, void*);

int S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    void* p = 0;
    *(int*)this = 0;
    if (!func_0060a2f0(&p)) {
        void* mem = func_006a0920(0x28);
        func_0055f6a0(mem, &p);
        *(void**)((char*)this + 8) = mem;
        *(int*)this = 0x82de8c;
    } else {
        *(int*)this = 0;
    }
    if (p) {
        void* vt = *(void**)p;
        if (vt) {
            ((void (__stdcall*)(void*, void*, int))vt)(p, &p, 1);
        }
    }
    return (int)this;
}
