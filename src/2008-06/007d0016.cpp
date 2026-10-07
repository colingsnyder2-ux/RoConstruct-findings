// roc 2008-06 007d0016  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d0016
//
// 007d0016  b9b84c9700           mov ecx, 0x974cb8
// 007d001b  e9003ddeff           jmp 0x5b3d20
// auto-matched from its assembly shape

struct T_func_007d0016 { void m(); };
extern T_func_007d0016 G1_func_007d0016;
void func_007d0016()
{
    G1_func_007d0016.m();
}
