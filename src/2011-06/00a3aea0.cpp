// roc 2011-06 00a3aea0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aea0
//
// 00a3aea0  b958dccc00           mov ecx, 0xccdc58
// 00a3aea5  e91622a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3aea0 { void m(); };
extern T_func_00a3aea0 G1_func_00a3aea0;
void func_00a3aea0()
{
    G1_func_00a3aea0.m();
}
