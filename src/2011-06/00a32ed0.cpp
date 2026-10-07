// roc 2011-06 00a32ed0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32ed0
//
// 00a32ed0  b95866cb00           mov ecx, 0xcb6658
// 00a32ed5  e966b7a9ff           jmp 0x4ce640
// auto-matched from its assembly shape

struct T_func_00a32ed0 { void m(); };
extern T_func_00a32ed0 G1_func_00a32ed0;
void func_00a32ed0()
{
    G1_func_00a32ed0.m();
}
