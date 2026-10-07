// roc 2008-06 007fff00  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fff00
//
// 007fff00  b940af9700           mov ecx, 0x97af40
// 007fff05  e966d2deff           jmp 0x5ed170
// auto-matched from its assembly shape

struct T_func_007fff00 { void m(); };
extern T_func_007fff00 G1_func_007fff00;
void func_007fff00()
{
    G1_func_007fff00.m();
}
