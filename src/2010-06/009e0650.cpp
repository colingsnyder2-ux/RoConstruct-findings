// roc 2010-06 009e0650  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0650
//
// 009e0650  b99044c100           mov ecx, 0xc14490
// 009e0655  e9269fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0650 { void m(); };
extern T_func_009e0650 G1_func_009e0650;
void func_009e0650()
{
    G1_func_009e0650.m();
}
