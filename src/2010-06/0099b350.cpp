// roc 2010-06 0099b350  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099b350
//
// 0099b350  b918a4c100           mov ecx, 0xc1a418
// 0099b355  e9667eb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099b350 { void m(); };
extern T_func_0099b350 G1_func_0099b350;
void func_0099b350()
{
    G1_func_0099b350.m();
}
