// roc 2007-08 0077a9b0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a9b0
//
// 0077a9b0  b9e8448c00           mov ecx, 0x8c44e8
// 0077a9b5  e906c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a9b0 { void m(); };
extern T_func_0077a9b0 G1_func_0077a9b0;
void func_0077a9b0()
{
    G1_func_0077a9b0.m();
}
