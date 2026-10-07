// roc 2009-06 00899810  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899810
//
// 00899810  b9a8aaa400           mov ecx, 0xa4aaa8
// 00899815  e9e683dbff           jmp 0x651c00
// auto-matched from its assembly shape

struct T_func_00899810 { void m(); };
extern T_func_00899810 G1_func_00899810;
void func_00899810()
{
    G1_func_00899810.m();
}
