// roc 2011-06 00a3f260  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f260
//
// 00a3f260  b9b04bcd00           mov ecx, 0xcd4bb0
// 00a3f265  e9b6a5cfff           jmp 0x739820
// auto-matched from its assembly shape

struct T_func_00a3f260 { void m(); };
extern T_func_00a3f260 G1_func_00a3f260;
void func_00a3f260()
{
    G1_func_00a3f260.m();
}
