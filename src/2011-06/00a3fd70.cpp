// roc 2011-06 00a3fd70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fd70
//
// 00a3fd70  b9f492d100           mov ecx, 0xd192f4
// 00a3fd75  e91613ecff           jmp 0x901090
// auto-matched from its assembly shape

struct T_func_00a3fd70 { void m(); };
extern T_func_00a3fd70 G1_func_00a3fd70;
void func_00a3fd70()
{
    G1_func_00a3fd70.m();
}
