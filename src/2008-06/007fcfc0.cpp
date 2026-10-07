// roc 2008-06 007fcfc0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcfc0
//
// 007fcfc0  b9e0419700           mov ecx, 0x9741e0
// 007fcfc5  e98675d6ff           jmp 0x564550
// auto-matched from its assembly shape

struct T_func_007fcfc0 { void m(); };
extern T_func_007fcfc0 G1_func_007fcfc0;
void func_007fcfc0()
{
    G1_func_007fcfc0.m();
}
