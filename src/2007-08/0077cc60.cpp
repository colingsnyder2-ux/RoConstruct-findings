// roc 2007-08 0077cc60  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cc60
//
// 0077cc60  b9808f8c00           mov ecx, 0x8c8f80
// 0077cc65  e9f6a4f1ff           jmp 0x697160
// auto-matched from its assembly shape

struct T_func_0077cc60 { void m(); };
extern T_func_0077cc60 G1_func_0077cc60;
void func_0077cc60()
{
    G1_func_0077cc60.m();
}
