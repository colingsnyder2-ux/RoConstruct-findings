// roc 2010-06 00998340  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00998340
//
// 00998340  b9d896c100           mov ecx, 0xc196d8
// 00998345  e976aeb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00998340 { void m(); };
extern T_func_00998340 G1_func_00998340;
void func_00998340()
{
    G1_func_00998340.m();
}
