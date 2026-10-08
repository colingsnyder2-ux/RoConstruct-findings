// roc 2007-08 0077a4b0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a4b0
//
// 0077a4b0  b960308c00           mov ecx, 0x8c3060
// 0077a4b5  e906c8c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a4b0 { void m(); };
extern T_func_0077a4b0 G1_func_0077a4b0;
void func_0077a4b0()
{
    G1_func_0077a4b0.m();
}
