// roc 2007-08 0077cc70  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cc70
//
// 0077cc70  b9e0908c00           mov ecx, 0x8c90e0
// 0077cc75  e93698f7ff           jmp 0x6f64b0
// auto-matched from its assembly shape

struct T_func_0077cc70 { void m(); };
extern T_func_0077cc70 G1_func_0077cc70;
void func_0077cc70()
{
    G1_func_0077cc70.m();
}
