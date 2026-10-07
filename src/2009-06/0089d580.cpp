// roc 2009-06 0089d580  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d580
//
// 0089d580  b9a426a500           mov ecx, 0xa526a4
// 0089d585  e96eeefaff           jmp 0x84c3f8
// auto-matched from its assembly shape

struct T_func_0089d580 { void m(); };
extern T_func_0089d580 G1_func_0089d580;
void func_0089d580()
{
    G1_func_0089d580.m();
}
