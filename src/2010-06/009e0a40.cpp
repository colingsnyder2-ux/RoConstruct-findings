// roc 2010-06 009e0a40  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0a40
//
// 009e0a40  b99005c100           mov ecx, 0xc10590
// 009e0a45  e9369ba2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0a40 { void m(); };
extern T_func_009e0a40 G1_func_009e0a40;
void func_009e0a40()
{
    G1_func_009e0a40.m();
}
