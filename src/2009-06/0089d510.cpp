// roc 2009-06 0089d510  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d510
//
// 0089d510  b91822a500           mov ecx, 0xa52218
// 0089d515  e9deeefaff           jmp 0x84c3f8
// auto-matched from its assembly shape

struct T_func_0089d510 { void m(); };
extern T_func_0089d510 G1_func_0089d510;
void func_0089d510()
{
    G1_func_0089d510.m();
}
