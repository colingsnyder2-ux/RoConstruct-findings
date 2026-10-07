// roc 2010-06 009dc310  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc310
//
// 009dc310  b9d840c000           mov ecx, 0xc040d8
// 009dc315  e966e2a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dc310 { void m(); };
extern T_func_009dc310 G1_func_009dc310;
void func_009dc310()
{
    G1_func_009dc310.m();
}
