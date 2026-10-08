// roc 2007-08 0077a060  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a060
//
// 0077a060  b958258c00           mov ecx, 0x8c2558
// 0077a065  e956ccc9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a060 { void m(); };
extern T_func_0077a060 G1_func_0077a060;
void func_0077a060()
{
    G1_func_0077a060.m();
}
