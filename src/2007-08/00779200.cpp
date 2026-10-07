// roc 2007-08 00779200  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779200
//
// 00779200  b920fc8b00           mov ecx, 0x8bfc20
// 00779205  e9b6c1d8ff           jmp 0x5053c0
// auto-matched from its assembly shape

struct T_func_00779200 { void m(); };
extern T_func_00779200 G1_func_00779200;
void func_00779200()
{
    G1_func_00779200.m();
}
