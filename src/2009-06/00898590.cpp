// roc 2009-06 00898590  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898590
//
// 00898590  b9f07fa400           mov ecx, 0xa47ff0
// 00898595  e9761db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898590 { void m(); };
extern T_func_00898590 G1_func_00898590;
void func_00898590()
{
    G1_func_00898590.m();
}
