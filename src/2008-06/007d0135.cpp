// roc 2008-06 007d0135  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d0135
//
// 007d0135  b9984c9700           mov ecx, 0x974c98
// 007d013a  e9e13bdeff           jmp 0x5b3d20
// auto-matched from its assembly shape

struct T_func_007d0135 { void m(); };
extern T_func_007d0135 G1_func_007d0135;
void func_007d0135()
{
    G1_func_007d0135.m();
}
