// from server: 20% by atomic.potato
extern "C" void __stdcall func_004c87b0();
extern "C" void __stdcall func_006a00e0();

struct S {
    char pad0[4];
    int field4;
    void f();
};

void S::f()
{
    func_004c87b0();
    func_006a00e0();
}
