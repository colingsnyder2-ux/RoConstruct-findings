// roc 2010-06 009e0880  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0880
//
// 009e0880  b99021c100           mov ecx, 0xc12190
// 009e0885  e9f69ca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0880 { void m(); };
extern T_func_009e0880 G1_func_009e0880;
void func_009e0880()
{
    G1_func_009e0880.m();
}
