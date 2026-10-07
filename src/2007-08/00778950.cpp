// roc 2007-08 00778950  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778950
//
// 00778950  b988e98b00           mov ecx, 0x8be988
// 00778955  e966e3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00778950 { void m(); };
extern T_func_00778950 G1_func_00778950;
void func_00778950()
{
    G1_func_00778950.m();
}
