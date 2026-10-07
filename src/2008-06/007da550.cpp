// roc 2008-06 007da550  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007da550
//
// 007da550  b9c4d49700           mov ecx, 0x97d4c4
// 007da555  e9f6f3c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007da550 { void m(); };
extern T_func_007da550 G1_func_007da550;
void func_007da550()
{
    G1_func_007da550.m();
}
