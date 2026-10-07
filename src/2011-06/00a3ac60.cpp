// roc 2011-06 00a3ac60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ac60
//
// 00a3ac60  b918d6cc00           mov ecx, 0xccd618
// 00a3ac65  e9d62e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a3ac60 { void m(); };
extern T_func_00a3ac60 G1_func_00a3ac60;
void func_00a3ac60()
{
    G1_func_00a3ac60.m();
}
