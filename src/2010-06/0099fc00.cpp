// roc 2010-06 0099fc00  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fc00
//
// 0099fc00  b9a0d4c100           mov ecx, 0xc1d4a0
// 0099fc05  e9b635b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fc00 { void m(); };
extern T_func_0099fc00 G1_func_0099fc00;
void func_0099fc00()
{
    G1_func_0099fc00.m();
}
