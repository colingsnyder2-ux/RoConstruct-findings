// roc 2007-08 00778940  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778940
//
// 00778940  b928ea8b00           mov ecx, 0x8bea28
// 00778945  e976e3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00778940 { void m(); };
extern T_func_00778940 G1_func_00778940;
void func_00778940()
{
    G1_func_00778940.m();
}
