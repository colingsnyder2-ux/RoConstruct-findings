// roc 2011-06 00a3bec0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bec0
//
// 00a3bec0  b900facc00           mov ecx, 0xccfa00
// 00a3bec5  e9f611a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3bec0 { void m(); };
extern T_func_00a3bec0 G1_func_00a3bec0;
void func_00a3bec0()
{
    G1_func_00a3bec0.m();
}
