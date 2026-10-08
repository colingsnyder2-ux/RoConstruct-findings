// roc 2007-08 00779620  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779620
//
// 00779620  b9d8148c00           mov ecx, 0x8c14d8
// 00779625  e9b610deff           jmp 0x55a6e0
// auto-matched from its assembly shape

struct T_func_00779620 { void m(); };
extern T_func_00779620 G1_func_00779620;
void func_00779620()
{
    G1_func_00779620.m();
}
