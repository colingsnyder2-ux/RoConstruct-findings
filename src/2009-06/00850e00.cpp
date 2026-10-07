// roc 2009-06 00850e00  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00850e00
//
// 00850e00  b94cb3a300           mov ecx, 0xa3b34c
// 00850e05  e946f1beff           jmp 0x43ff50
// auto-matched from its assembly shape

struct T_func_00850e00 { void m(); };
extern T_func_00850e00 G1_func_00850e00;
void func_00850e00()
{
    G1_func_00850e00.m();
}
