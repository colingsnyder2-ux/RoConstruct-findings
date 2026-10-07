// roc 2011-06 00a3fd8f  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fd8f
//
// 00a3fd8f  b93893d100           mov ecx, 0xd19338
// 00a3fd94  e92e3cecff           jmp 0x9039c7
// auto-matched from its assembly shape

struct T_func_00a3fd8f { void m(); };
extern T_func_00a3fd8f G1_func_00a3fd8f;
void func_00a3fd8f()
{
    G1_func_00a3fd8f.m();
}
