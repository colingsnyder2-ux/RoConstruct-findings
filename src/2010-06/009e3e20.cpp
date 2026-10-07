// roc 2010-06 009e3e20  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3e20
//
// 009e3e20  b918bfc100           mov ecx, 0xc1bf18
// 009e3e25  e926d4d0ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009e3e20 { void m(); };
extern T_func_009e3e20 G1_func_009e3e20;
void func_009e3e20()
{
    G1_func_009e3e20.m();
}
