// roc 2010-06 0099d950  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099d950
//
// 0099d950  b948bcc100           mov ecx, 0xc1bc48
// 0099d955  e96658b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099d950 { void m(); };
extern T_func_0099d950 G1_func_0099d950;
void func_0099d950()
{
    G1_func_0099d950.m();
}
