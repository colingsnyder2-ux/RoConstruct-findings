// roc 2008-06 007cf600  unit: seg_007c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007cf600
//
// 007cf600  b9f0499700           mov ecx, 0x9749f0
// 007cf605  e946a3c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007cf600 { void m(); };
extern T_func_007cf600 G1_func_007cf600;
void func_007cf600()
{
    G1_func_007cf600.m();
}
