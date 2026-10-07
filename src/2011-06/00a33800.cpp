// roc 2011-06 00a33800  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33800
//
// 00a33800  b9d07ecb00           mov ecx, 0xcb7ed0
// 00a33805  e936a39dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a33800 { void m(); };
extern T_func_00a33800 G1_func_00a33800;
void func_00a33800()
{
    G1_func_00a33800.m();
}
