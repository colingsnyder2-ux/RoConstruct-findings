// roc 2008-06 007faf10  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007faf10
//
// 007faf10  b9a0dd9600           mov ecx, 0x96dda0
// 007faf15  e9a6fcc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007faf10 { void m(); };
extern T_func_007faf10 G1_func_007faf10;
void func_007faf10()
{
    G1_func_007faf10.m();
}
