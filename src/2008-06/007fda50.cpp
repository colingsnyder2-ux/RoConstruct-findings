// roc 2008-06 007fda50  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fda50
//
// 007fda50  b9405a9700           mov ecx, 0x975a40
// 007fda55  e9865acaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fda50 { void m(); };
extern T_func_007fda50 G1_func_007fda50;
void func_007fda50()
{
    G1_func_007fda50.m();
}
