// roc 2011-06 00a19060  unit: seg_00a10000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19060
//
// 00a19060  b94479cb00           mov ecx, 0xcb7944
// 00a19065  e9b630a1ff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a19060 { void m(); };
extern T_func_00a19060 G1_func_00a19060;
void func_00a19060()
{
    G1_func_00a19060.m();
}
