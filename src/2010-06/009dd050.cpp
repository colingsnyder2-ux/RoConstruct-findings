// roc 2010-06 009dd050  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd050
//
// 009dd050  b9b85ec000           mov ecx, 0xc05eb8
// 009dd055  e91695bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dd050 { void m(); };
extern T_func_009dd050 G1_func_009dd050;
void func_009dd050()
{
    G1_func_009dd050.m();
}
