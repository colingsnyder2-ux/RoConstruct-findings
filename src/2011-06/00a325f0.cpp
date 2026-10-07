// roc 2011-06 00a325f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a325f0
//
// 00a325f0  b9c859cb00           mov ecx, 0xcb59c8
// 00a325f5  e9c6aaa7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a325f0 { void m(); };
extern T_func_00a325f0 G1_func_00a325f0;
void func_00a325f0()
{
    G1_func_00a325f0.m();
}
