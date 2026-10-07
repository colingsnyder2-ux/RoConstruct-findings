// roc 2011-06 00a34cb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34cb0
//
// 00a34cb0  b950aecb00           mov ecx, 0xcbae50
// 00a34cb5  e9768fb5ff           jmp 0x58dc30
// auto-matched from its assembly shape

struct T_func_00a34cb0 { void m(); };
extern T_func_00a34cb0 G1_func_00a34cb0;
void func_00a34cb0()
{
    G1_func_00a34cb0.m();
}
