// roc 2007-08 007799e0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007799e0
//
// 007799e0  b9801a8c00           mov ecx, 0x8c1a80
// 007799e5  e9d6d2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007799e0 { void m(); };
extern T_func_007799e0 G1_func_007799e0;
void func_007799e0()
{
    G1_func_007799e0.m();
}
