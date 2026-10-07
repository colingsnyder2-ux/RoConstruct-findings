// roc 2009-06 00898a80  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898a80
//
// 00898a80  b9a89aa400           mov ecx, 0xa49aa8
// 00898a85  e9664fd5ff           jmp 0x5ed9f0
// auto-matched from its assembly shape

struct T_func_00898a80 { void m(); };
extern T_func_00898a80 G1_func_00898a80;
void func_00898a80()
{
    G1_func_00898a80.m();
}
