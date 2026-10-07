// roc 2011-06 00a37d60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37d60
//
// 00a37d60  b9b09dcc00           mov ecx, 0xcc9db0
// 00a37d65  e96612b9ff           jmp 0x5c8fd0
// auto-matched from its assembly shape

struct T_func_00a37d60 { void m(); };
extern T_func_00a37d60 G1_func_00a37d60;
void func_00a37d60()
{
    G1_func_00a37d60.m();
}
