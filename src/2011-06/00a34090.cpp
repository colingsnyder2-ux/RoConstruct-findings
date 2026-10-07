// roc 2011-06 00a34090  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34090
//
// 00a34090  b94086cb00           mov ecx, 0xcb8640
// 00a34095  e97684a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a34090 { void m(); };
extern T_func_00a34090 G1_func_00a34090;
void func_00a34090()
{
    G1_func_00a34090.m();
}
