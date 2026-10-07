// roc 2008-06 008016a0  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008016a0
//
// 008016a0  b9fce09700           mov ecx, 0x97e0fc
// 008016a5  ff25143f8000         jmp dword ptr [0x803f14]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_008016a0 { void m(); };
extern T_func_008016a0 G1_func_008016a0;
void func_008016a0()
{
    G1_func_008016a0.m();
}
