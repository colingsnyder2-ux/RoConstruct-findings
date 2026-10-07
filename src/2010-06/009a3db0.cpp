// roc 2010-06 009a3db0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3db0
//
// 009a3db0  b928fcc100           mov ecx, 0xc1fc28
// 009a3db5  e906f4afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a3db0 { void m(); };
extern T_func_009a3db0 G1_func_009a3db0;
void func_009a3db0()
{
    G1_func_009a3db0.m();
}
