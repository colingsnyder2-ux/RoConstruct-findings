// roc 2008-06 008018e0  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008018e0
//
// 008018e0  b9cced9700           mov ecx, 0x97edcc
// 008018e5  ff25143f8000         jmp dword ptr [0x803f14]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_008018e0 { void m(); };
extern T_func_008018e0 G1_func_008018e0;
void func_008018e0()
{
    G1_func_008018e0.m();
}
