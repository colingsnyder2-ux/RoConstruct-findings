// roc 2008-06 007fad70  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fad70
//
// 007fad70  b930d59600           mov ecx, 0x96d530
// 007fad75  e946fec0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fad70 { void m(); };
extern T_func_007fad70 G1_func_007fad70;
void func_007fad70()
{
    G1_func_007fad70.m();
}
