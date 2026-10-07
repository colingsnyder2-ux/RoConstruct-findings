// roc 2007-08 00778780  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778780
//
// 00778780  b988e68b00           mov ecx, 0x8be688
// 00778785  e986eec9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778780 { void m(); };
extern T_func_00778780 G1_func_00778780;
void func_00778780()
{
    G1_func_00778780.m();
}
