// roc 2011-06 00a34120  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34120
//
// 00a34120  b9b088cb00           mov ecx, 0xcb88b0
// 00a34125  e9169a9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a34120 { void m(); };
extern T_func_00a34120 G1_func_00a34120;
void func_00a34120()
{
    G1_func_00a34120.m();
}
