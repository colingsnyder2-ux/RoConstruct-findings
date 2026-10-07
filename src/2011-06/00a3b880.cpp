// roc 2011-06 00a3b880  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b880
//
// 00a3b880  b988e8cc00           mov ecx, 0xcce888
// 00a3b885  e9860ca7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b880 { void m(); };
extern T_func_00a3b880 G1_func_00a3b880;
void func_00a3b880()
{
    G1_func_00a3b880.m();
}
