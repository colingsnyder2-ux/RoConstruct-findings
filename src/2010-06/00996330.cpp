// roc 2010-06 00996330  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00996330
//
// 00996330  b9c888c100           mov ecx, 0xc188c8
// 00996335  e986ceb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00996330 { void m(); };
extern T_func_00996330 G1_func_00996330;
void func_00996330()
{
    G1_func_00996330.m();
}
