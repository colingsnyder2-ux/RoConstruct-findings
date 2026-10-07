// roc 2010-06 0099c850  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099c850
//
// 0099c850  b9d0b0c100           mov ecx, 0xc1b0d0
// 0099c855  e96669b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099c850 { void m(); };
extern T_func_0099c850 G1_func_0099c850;
void func_0099c850()
{
    G1_func_0099c850.m();
}
