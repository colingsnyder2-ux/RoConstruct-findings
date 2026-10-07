// roc 2008-06 008002f0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008002f0
//
// 008002f0  b9c8bb9700           mov ecx, 0x97bbc8
// 008002f5  e956abe0ff           jmp 0x60ae50
// auto-matched from its assembly shape

struct T_func_008002f0 { void m(); };
extern T_func_008002f0 G1_func_008002f0;
void func_008002f0()
{
    G1_func_008002f0.m();
}
