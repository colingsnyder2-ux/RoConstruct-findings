// roc 2007-08 0077aa20  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aa20
//
// 0077aa20  b928478c00           mov ecx, 0x8c4728
// 0077aa25  e996c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aa20 { void m(); };
extern T_func_0077aa20 G1_func_0077aa20;
void func_0077aa20()
{
    G1_func_0077aa20.m();
}
