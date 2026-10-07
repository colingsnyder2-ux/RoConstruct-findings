// roc 2009-06 0085ce40  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085ce40
//
// 0085ce40  b9b4f4a300           mov ecx, 0xa3f4b4
// 0085ce45  e90669c5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085ce40 { void m(); };
extern T_func_0085ce40 G1_func_0085ce40;
void func_0085ce40()
{
    G1_func_0085ce40.m();
}
