// roc 2011-06 00a34cd0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34cd0
//
// 00a34cd0  b910accb00           mov ecx, 0xcbac10
// 00a34cd5  e9769eb5ff           jmp 0x58eb50
// auto-matched from its assembly shape

struct T_func_00a34cd0 { void m(); };
extern T_func_00a34cd0 G1_func_00a34cd0;
void func_00a34cd0()
{
    G1_func_00a34cd0.m();
}
