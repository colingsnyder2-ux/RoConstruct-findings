// from server: 28% by atomic.potato
extern "C" bool __stdcall G1_func_005123a0();
extern "C" bool __stdcall G1_func_005123b0();
extern "C" void __stdcall func_00409390();
extern "C" void __stdcall func_007f4878();

extern "C" void* __stdcall sub_98b6f4();

struct S {
    void f();
};

void S::f()
{
    if (G1_func_005123a0()) {
        if (!G1_func_005123b0()) {
            char buf[0x44];
            sub_98b6f4();
            func_00409390();
            func_007f4878();
        }
    }
}
