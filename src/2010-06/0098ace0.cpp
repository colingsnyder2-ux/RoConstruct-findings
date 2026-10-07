// roc 2010-06 0098ace0  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098ace0
//
// 0098ace0  b94c50c000           mov ecx, 0xc0504c
// 0098ace5  e9d684b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098ace0 { void m(); };
extern T_func_0098ace0 G1_func_0098ace0;
void func_0098ace0()
{
    G1_func_0098ace0.m();
}
