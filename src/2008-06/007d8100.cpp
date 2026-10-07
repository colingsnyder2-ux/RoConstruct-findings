// roc 2008-06 007d8100  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d8100
//
// 007d8100  b9d4b69700           mov ecx, 0x97b6d4
// 007d8105  e94618c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d8100 { void m(); };
extern T_func_007d8100 G1_func_007d8100;
void func_007d8100()
{
    G1_func_007d8100.m();
}
