// roc 2009-06 0089d5a0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d5a0
//
// 0089d5a0  b9c426a500           mov ecx, 0xa526c4
// 0089d5a5  ff2510fd8900         jmp dword ptr [0x89fd10]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d5a0 { void m(); };
extern T_func_0089d5a0 G1_func_0089d5a0;
void func_0089d5a0()
{
    G1_func_0089d5a0.m();
}
