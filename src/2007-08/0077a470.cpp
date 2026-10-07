// roc 2007-08 0077a470  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a470
//
// 0077a470  b9082d8c00           mov ecx, 0x8c2d08
// 0077a475  e9a6f6dfff           jmp 0x579b20
// auto-matched from its assembly shape

struct T_func_0077a470 { void m(); };
extern T_func_0077a470 G1_func_0077a470;
void func_0077a470()
{
    G1_func_0077a470.m();
}
