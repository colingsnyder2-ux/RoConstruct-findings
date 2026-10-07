// roc 2008-06 007d6060  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d6060
//
// 007d6060  b948a39700           mov ecx, 0x97a348
// 007d6065  e9e638c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d6060 { void m(); };
extern T_func_007d6060 G1_func_007d6060;
void func_007d6060()
{
    G1_func_007d6060.m();
}
