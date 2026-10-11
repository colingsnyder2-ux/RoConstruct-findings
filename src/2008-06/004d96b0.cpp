// from server: 35% by atomic.potato
struct Inner {
    int f(int a, int b, int c);
};

struct S {
    int f(int arg);
    int field0;
    int field4;
    char pad8[0x28];
};

extern "C" void* __cdecl func_006a0920(unsigned int size);
extern "C" void __cdecl func_0041ad40();
extern "C" void __cdecl func_0041b0f0();
extern "C" void __cdecl func_00595840();

int S::f(int arg)
{
    field0 = 0;
    field4 = 0;
    Inner* p = (Inner*)((char*)this + 8);
    p->f(*(int*)arg, *(int*)(arg + 4), 0);
    void* mem = func_006a0920(0x28);
    if (mem) {
        func_0041ad40();
    } else {
        mem = 0;
    }
    func_0041b0f0();
    func_00595840();
    return (int)this;
}
