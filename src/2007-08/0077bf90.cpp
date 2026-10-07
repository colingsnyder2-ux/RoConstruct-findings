// roc 2007-08 0077bf90  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bf90
//
// 0077bf90  b9a86f8c00           mov ecx, 0x8c6fa8
// 0077bf95  e976b6c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077bf90 { void m(); };
extern T_func_0077bf90 G1_func_0077bf90;
void func_0077bf90()
{
    G1_func_0077bf90.m();
}
