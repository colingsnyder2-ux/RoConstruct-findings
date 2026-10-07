// roc 2010-06 009c7580  unit: seg_009c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7580
//
// 009c7580  b97a5dc000           mov ecx, 0xc05d7a
// 009c7585  e95640d4ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009c7580 { void m(); };
extern T_func_009c7580 G1_func_009c7580;
void func_009c7580()
{
    G1_func_009c7580.m();
}
