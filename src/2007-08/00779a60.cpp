// roc 2007-08 00779a60  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779a60
//
// 00779a60  b9a81b8c00           mov ecx, 0x8c1ba8
// 00779a65  e956d2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00779a60 { void m(); };
extern T_func_00779a60 G1_func_00779a60;
void func_00779a60()
{
    G1_func_00779a60.m();
}
