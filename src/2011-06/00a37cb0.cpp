// roc 2011-06 00a37cb0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37cb0
//
// 00a37cb0  b9d0eacb00           mov ecx, 0xcbead0
// 00a37cb5  e9865e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37cb0 { void m(); };
extern T_func_00a37cb0 G1_func_00a37cb0;
void func_00a37cb0()
{
    G1_func_00a37cb0.m();
}
