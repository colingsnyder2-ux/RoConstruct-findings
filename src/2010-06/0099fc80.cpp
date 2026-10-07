// roc 2010-06 0099fc80  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fc80
//
// 0099fc80  b950d7c100           mov ecx, 0xc1d750
// 0099fc85  e93635b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fc80 { void m(); };
extern T_func_0099fc80 G1_func_0099fc80;
void func_0099fc80()
{
    G1_func_0099fc80.m();
}
