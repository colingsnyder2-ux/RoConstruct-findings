// roc 2008-06 007fa630  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa630
//
// 007fa630  b9c8cf9600           mov ecx, 0x96cfc8
// 007fa635  e98605c1ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fa630 { void m(); };
extern T_func_007fa630 G1_func_007fa630;
void func_007fa630()
{
    G1_func_007fa630.m();
}
