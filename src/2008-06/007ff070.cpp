// roc 2008-06 007ff070  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff070
//
// 007ff070  b9a89d9700           mov ecx, 0x979da8
// 007ff075  e946bbc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007ff070 { void m(); };
extern T_func_007ff070 G1_func_007ff070;
void func_007ff070()
{
    G1_func_007ff070.m();
}
