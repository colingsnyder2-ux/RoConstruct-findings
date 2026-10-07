// roc 2011-06 00a373f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a373f0
//
// 00a373f0  b9f060cc00           mov ecx, 0xcc60f0
// 00a373f5  e946679dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a373f0 { void m(); };
extern T_func_00a373f0 G1_func_00a373f0;
void func_00a373f0()
{
    G1_func_00a373f0.m();
}
