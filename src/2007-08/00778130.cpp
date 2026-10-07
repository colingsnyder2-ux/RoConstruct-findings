// roc 2007-08 00778130  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778130
//
// 00778130  b9c8dd8b00           mov ecx, 0x8bddc8
// 00778135  e9d6f4c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778130 { void m(); };
extern T_func_00778130 G1_func_00778130;
void func_00778130()
{
    G1_func_00778130.m();
}
