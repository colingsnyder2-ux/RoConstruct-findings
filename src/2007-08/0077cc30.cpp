// roc 2007-08 0077cc30  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cc30
//
// 0077cc30  b9588f8c00           mov ecx, 0x8c8f58
// 0077cc35  e9b627f0ff           jmp 0x67f3f0
// auto-matched from its assembly shape

struct T_func_0077cc30 { void m(); };
extern T_func_0077cc30 G1_func_0077cc30;
void func_0077cc30()
{
    G1_func_0077cc30.m();
}
