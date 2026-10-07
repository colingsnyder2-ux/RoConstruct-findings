// roc 2010-06 009e0680  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0680
//
// 009e0680  b99041c100           mov ecx, 0xc14190
// 009e0685  e9f69ea2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0680 { void m(); };
extern T_func_009e0680 G1_func_009e0680;
void func_009e0680()
{
    G1_func_009e0680.m();
}
