// roc 2011-06 00a33080  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33080
//
// 00a33080  b9b06ccb00           mov ecx, 0xcb6cb0
// 00a33085  e936a0a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a33080 { void m(); };
extern T_func_00a33080 G1_func_00a33080;
void func_00a33080()
{
    G1_func_00a33080.m();
}
