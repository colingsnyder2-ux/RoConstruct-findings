// roc 2008-06 007fa280  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa280
//
// 007fa280  b9d8c69600           mov ecx, 0x96c6d8
// 007fa285  e93609c1ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fa280 { void m(); };
extern T_func_007fa280 G1_func_007fa280;
void func_007fa280()
{
    G1_func_007fa280.m();
}
