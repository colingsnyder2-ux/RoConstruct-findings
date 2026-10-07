// roc 2011-06 00a37710  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37710
//
// 00a37710  b9c036cc00           mov ecx, 0xcc36c0
// 00a37715  e926649dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37710 { void m(); };
extern T_func_00a37710 G1_func_00a37710;
void func_00a37710()
{
    G1_func_00a37710.m();
}
