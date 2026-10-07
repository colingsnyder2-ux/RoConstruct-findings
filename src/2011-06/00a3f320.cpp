// roc 2011-06 00a3f320  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f320
//
// 00a3f320  b9a84dcd00           mov ecx, 0xcd4da8
// 00a3f325  e9c6eabdff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a3f320 { void m(); };
extern T_func_00a3f320 G1_func_00a3f320;
void func_00a3f320()
{
    G1_func_00a3f320.m();
}
