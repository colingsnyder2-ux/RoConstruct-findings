// roc 2008-06 007fc630  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc630
//
// 007fc630  b9e8379700           mov ecx, 0x9737e8
// 007fc635  e996c0d0ff           jmp 0x5086d0
// auto-matched from its assembly shape

struct T_func_007fc630 { void m(); };
extern T_func_007fc630 G1_func_007fc630;
void func_007fc630()
{
    G1_func_007fc630.m();
}
