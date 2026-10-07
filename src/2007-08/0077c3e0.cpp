// roc 2007-08 0077c3e0  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c3e0
//
// 0077c3e0  b9207d8c00           mov ecx, 0x8c7d20
// 0077c3e5  ff25ace67700         jmp dword ptr [0x77e6ac]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0077c3e0 { void m(); };
extern T_func_0077c3e0 G1_func_0077c3e0;
void func_0077c3e0()
{
    G1_func_0077c3e0.m();
}
