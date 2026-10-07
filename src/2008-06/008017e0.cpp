// roc 2008-06 008017e0  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008017e0
//
// 008017e0  b994e19700           mov ecx, 0x97e194
// 008017e5  ff25143f8000         jmp dword ptr [0x803f14]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_008017e0 { void m(); };
extern T_func_008017e0 G1_func_008017e0;
void func_008017e0()
{
    G1_func_008017e0.m();
}
