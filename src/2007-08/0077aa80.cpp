// roc 2007-08 0077aa80  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aa80
//
// 0077aa80  b988388c00           mov ecx, 0x8c3888
// 0077aa85  e936c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aa80 { void m(); };
extern T_func_0077aa80 G1_func_0077aa80;
void func_0077aa80()
{
    G1_func_0077aa80.m();
}
