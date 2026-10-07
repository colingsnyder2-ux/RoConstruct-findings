// roc 2011-06 00a3c1b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c1b0
//
// 00a3c1b0  b9c8fccc00           mov ecx, 0xccfcc8
// 00a3c1b5  e95603a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c1b0 { void m(); };
extern T_func_00a3c1b0 G1_func_00a3c1b0;
void func_00a3c1b0()
{
    G1_func_00a3c1b0.m();
}
