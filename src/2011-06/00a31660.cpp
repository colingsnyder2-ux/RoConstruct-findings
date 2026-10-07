// roc 2011-06 00a31660  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31660
//
// 00a31660  b9202bcb00           mov ecx, 0xcb2b20
// 00a31665  e9860da2ff           jmp 0x4523f0
// auto-matched from its assembly shape

struct T_func_00a31660 { void m(); };
extern T_func_00a31660 G1_func_00a31660;
void func_00a31660()
{
    G1_func_00a31660.m();
}
