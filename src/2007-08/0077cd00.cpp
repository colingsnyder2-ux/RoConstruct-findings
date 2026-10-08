// roc 2007-08 0077cd00  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cd00
//
// 0077cd00  b920968c00           mov ecx, 0x8c9620
// 0077cd05  e99631f7ff           jmp 0x6efea0
// auto-matched from its assembly shape

struct T_func_0077cd00 { void m(); };
extern T_func_0077cd00 G1_func_0077cd00;
void func_0077cd00()
{
    G1_func_0077cd00.m();
}
