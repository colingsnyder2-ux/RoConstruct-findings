// roc 2008-06 007fe4a0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe4a0
//
// 007fe4a0  b928759700           mov ecx, 0x977528
// 007fe4a5  e9c6c7dbff           jmp 0x5bac70
// auto-matched from its assembly shape

struct T_func_007fe4a0 { void m(); };
extern T_func_007fe4a0 G1_func_007fe4a0;
void func_007fe4a0()
{
    G1_func_007fe4a0.m();
}
