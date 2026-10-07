// roc 2007-08 00778680  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778680
//
// 00778680  b9f0e18b00           mov ecx, 0x8be1f0
// 00778685  e986efc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778680 { void m(); };
extern T_func_00778680 G1_func_00778680;
void func_00778680()
{
    G1_func_00778680.m();
}
