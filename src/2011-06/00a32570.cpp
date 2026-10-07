// roc 2011-06 00a32570  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32570
//
// 00a32570  b9a862cb00           mov ecx, 0xcb62a8
// 00a32575  e9969fa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32570 { void m(); };
extern T_func_00a32570 G1_func_00a32570;
void func_00a32570()
{
    G1_func_00a32570.m();
}
