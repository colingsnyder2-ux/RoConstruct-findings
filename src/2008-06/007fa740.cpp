// roc 2008-06 007fa740  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa740
//
// 007fa740  b9f8cd9600           mov ecx, 0x96cdf8
// 007fa745  e9d60ac2ff           jmp 0x41b220
// auto-matched from its assembly shape

struct T_func_007fa740 { void m(); };
extern T_func_007fa740 G1_func_007fa740;
void func_007fa740()
{
    G1_func_007fa740.m();
}
