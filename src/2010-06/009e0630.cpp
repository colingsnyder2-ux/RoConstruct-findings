// roc 2010-06 009e0630  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0630
//
// 009e0630  b99046c100           mov ecx, 0xc14690
// 009e0635  e9469fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0630 { void m(); };
extern T_func_009e0630 G1_func_009e0630;
void func_009e0630()
{
    G1_func_009e0630.m();
}
