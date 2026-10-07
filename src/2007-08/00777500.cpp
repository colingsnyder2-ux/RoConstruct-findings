// roc 2007-08 00777500  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777500
//
// 00777500  b9f8b08b00           mov ecx, 0x8bb0f8
// 00777505  e90601caff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00777500 { void m(); };
extern T_func_00777500 G1_func_00777500;
void func_00777500()
{
    G1_func_00777500.m();
}
