// roc 2007-08 00779660  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779660
//
// 00779660  b948148c00           mov ecx, 0x8c1448
// 00779665  e97610deff           jmp 0x55a6e0
// auto-matched from its assembly shape

struct T_func_00779660 { void m(); };
extern T_func_00779660 G1_func_00779660;
void func_00779660()
{
    G1_func_00779660.m();
}
