// roc 2008-06 007d9e40  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d9e40
//
// 007d9e40  b970ca9700           mov ecx, 0x97ca70
// 007d9e45  e906fbc2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d9e40 { void m(); };
extern T_func_007d9e40 G1_func_007d9e40;
void func_007d9e40()
{
    G1_func_007d9e40.m();
}
