// from server: 91% by colin
struct T_func_007744c0 { void m(); };

extern "C" void* __stdcall func_005b6d50(int, int, int);
extern "C" void* __stdcall func_00577100(void*);
extern "C" void __stdcall func_005873e0(void*, void*);
extern "C" void __stdcall func_00630d23(void*);

extern T_func_007744c0 G1_func_007744c0;

void func_007744c0()
{
    void* p1 = func_005b6d50(0, 0x79b698, 0x7aa0a0);
    void* p2 = func_00577100(p1);
    func_005873e0((void*)0x8c61fc, p2);
    *(int*)0x8c61fc = 0x7b869c;
    func_00630d23((void*)0x77b870);
}
