// roc 2010-06 009e4ef0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4ef0
//
// 009e4ef0  b9b0d0c100           mov ecx, 0xc1d0b0
// 009e4ef5  e946f6c1ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e4ef0 { void m(); };
extern T_func_009e4ef0 G1_func_009e4ef0;
void func_009e4ef0()
{
    G1_func_009e4ef0.m();
}
