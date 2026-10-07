// roc 2011-06 00a39790  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39790
//
// 00a39790  b988b4cc00           mov ecx, 0xccb488
// 00a39795  e95646beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a39790 { void m(); };
extern T_func_00a39790 G1_func_00a39790;
void func_00a39790()
{
    G1_func_00a39790.m();
}
