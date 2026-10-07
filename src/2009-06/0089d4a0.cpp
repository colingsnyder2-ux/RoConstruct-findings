// roc 2009-06 0089d4a0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d4a0
//
// 0089d4a0  b98c1aa500           mov ecx, 0xa51a8c
// 0089d4a5  ff2510fd8900         jmp dword ptr [0x89fd10]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d4a0 { void m(); };
extern T_func_0089d4a0 G1_func_0089d4a0;
void func_0089d4a0()
{
    G1_func_0089d4a0.m();
}
