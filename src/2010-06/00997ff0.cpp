// roc 2010-06 00997ff0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00997ff0
//
// 00997ff0  b98094c100           mov ecx, 0xc19480
// 00997ff5  e9c6b1b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00997ff0 { void m(); };
extern T_func_00997ff0 G1_func_00997ff0;
void func_00997ff0()
{
    G1_func_00997ff0.m();
}
