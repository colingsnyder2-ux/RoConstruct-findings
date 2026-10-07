// roc 2007-08 0077a8e0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a8e0
//
// 0077a8e0  b9a84b8c00           mov ecx, 0x8c4ba8
// 0077a8e5  e9d6c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a8e0 { void m(); };
extern T_func_0077a8e0 G1_func_0077a8e0;
void func_0077a8e0()
{
    G1_func_0077a8e0.m();
}
