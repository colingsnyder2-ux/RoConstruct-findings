// roc 2011-06 00a396f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a396f0
//
// 00a396f0  b9b4b5cc00           mov ecx, 0xccb5b4
// 00a396f5  e936f2baff           jmp 0x5e8930
// auto-matched from its assembly shape

struct T_func_00a396f0 { void m(); };
extern T_func_00a396f0 G1_func_00a396f0;
void func_00a396f0()
{
    G1_func_00a396f0.m();
}
