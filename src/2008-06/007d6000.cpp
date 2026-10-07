// roc 2008-06 007d6000  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d6000
//
// 007d6000  b98ca59700           mov ecx, 0x97a58c
// 007d6005  e94639c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d6000 { void m(); };
extern T_func_007d6000 G1_func_007d6000;
void func_007d6000()
{
    G1_func_007d6000.m();
}
