// roc 2010-06 009e0840  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0840
//
// 009e0840  b99025c100           mov ecx, 0xc12590
// 009e0845  e9369da2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0840 { void m(); };
extern T_func_009e0840 G1_func_009e0840;
void func_009e0840()
{
    G1_func_009e0840.m();
}
