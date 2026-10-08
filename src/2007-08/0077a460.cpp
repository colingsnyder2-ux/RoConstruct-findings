// roc 2007-08 0077a460  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a460
//
// 0077a460  b9a82d8c00           mov ecx, 0x8c2da8
// 0077a465  e956c8c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a460 { void m(); };
extern T_func_0077a460 G1_func_0077a460;
void func_0077a460()
{
    G1_func_0077a460.m();
}
