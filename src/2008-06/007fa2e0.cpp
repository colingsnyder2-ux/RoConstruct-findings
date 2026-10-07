// roc 2008-06 007fa2e0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa2e0
//
// 007fa2e0  b968c89600           mov ecx, 0x96c868
// 007fa2e5  e9d608c1ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fa2e0 { void m(); };
extern T_func_007fa2e0 G1_func_007fa2e0;
void func_007fa2e0()
{
    G1_func_007fa2e0.m();
}
