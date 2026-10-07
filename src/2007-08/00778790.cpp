// roc 2007-08 00778790  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778790
//
// 00778790  b940e68b00           mov ecx, 0x8be640
// 00778795  e93656d2ff           jmp 0x49ddd0
// auto-matched from its assembly shape

struct T_func_00778790 { void m(); };
extern T_func_00778790 G1_func_00778790;
void func_00778790()
{
    G1_func_00778790.m();
}
