// roc 2010-06 009e0990  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0990
//
// 009e0990  b99010c100           mov ecx, 0xc11090
// 009e0995  e9e69ba2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0990 { void m(); };
extern T_func_009e0990 G1_func_009e0990;
void func_009e0990()
{
    G1_func_009e0990.m();
}
