// roc 2011-06 00a34fd0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34fd0
//
// 00a34fd0  b938bbcb00           mov ecx, 0xcbbb38
// 00a34fd5  e9e680a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a34fd0 { void m(); };
extern T_func_00a34fd0 G1_func_00a34fd0;
void func_00a34fd0()
{
    G1_func_00a34fd0.m();
}
