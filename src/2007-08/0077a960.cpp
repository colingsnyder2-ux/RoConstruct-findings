// roc 2007-08 0077a960  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a960
//
// 0077a960  b9783c8c00           mov ecx, 0x8c3c78
// 0077a965  e956c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a960 { void m(); };
extern T_func_0077a960 G1_func_0077a960;
void func_0077a960()
{
    G1_func_0077a960.m();
}
