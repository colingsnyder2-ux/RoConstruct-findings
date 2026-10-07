// roc 2008-06 007fadc0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fadc0
//
// 007fadc0  b9e8d69600           mov ecx, 0x96d6e8
// 007fadc5  e936b9c4ff           jmp 0x446700
// auto-matched from its assembly shape

struct T_func_007fadc0 { void m(); };
extern T_func_007fadc0 G1_func_007fadc0;
void func_007fadc0()
{
    G1_func_007fadc0.m();
}
