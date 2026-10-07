// roc 2007-08 00777fa0  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777fa0
//
// 00777fa0  b9e0d08b00           mov ecx, 0x8bd0e0
// 00777fa5  ff25ace67700         jmp dword ptr [0x77e6ac]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00777fa0 { void m(); };
extern T_func_00777fa0 G1_func_00777fa0;
void func_00777fa0()
{
    G1_func_00777fa0.m();
}
