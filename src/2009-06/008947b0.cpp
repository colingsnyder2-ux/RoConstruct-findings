// roc 2009-06 008947b0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008947b0
//
// 008947b0  b938b1a300           mov ecx, 0xa3b138
// 008947b5  ff2510fd8900         jmp dword ptr [0x89fd10]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_008947b0 { void m(); };
extern T_func_008947b0 G1_func_008947b0;
void func_008947b0()
{
    G1_func_008947b0.m();
}
