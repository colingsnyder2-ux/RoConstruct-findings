// roc 2011-06 00a3f050  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f050
//
// 00a3f050  b92047cd00           mov ecx, 0xcd4720
// 00a3f055  e9b6d4a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f050 { void m(); };
extern T_func_00a3f050 G1_func_00a3f050;
void func_00a3f050()
{
    G1_func_00a3f050.m();
}
