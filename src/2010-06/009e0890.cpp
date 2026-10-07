// roc 2010-06 009e0890  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0890
//
// 009e0890  b99020c100           mov ecx, 0xc12090
// 009e0895  e9e69ca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0890 { void m(); };
extern T_func_009e0890 G1_func_009e0890;
void func_009e0890()
{
    G1_func_009e0890.m();
}
