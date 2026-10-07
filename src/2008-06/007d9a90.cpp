// roc 2008-06 007d9a90  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d9a90
//
// 007d9a90  b960c09700           mov ecx, 0x97c060
// 007d9a95  e9b6fec2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d9a90 { void m(); };
extern T_func_007d9a90 G1_func_007d9a90;
void func_007d9a90()
{
    G1_func_007d9a90.m();
}
