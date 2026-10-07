// roc 2011-06 00a3eeb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3eeb0
//
// 00a3eeb0  b96844cd00           mov ecx, 0xcd4468
// 00a3eeb5  e906e2a6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3eeb0 { void m(); };
extern T_func_00a3eeb0 G1_func_00a3eeb0;
void func_00a3eeb0()
{
    G1_func_00a3eeb0.m();
}
