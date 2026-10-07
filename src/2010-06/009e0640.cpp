// roc 2010-06 009e0640  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0640
//
// 009e0640  b99045c100           mov ecx, 0xc14590
// 009e0645  e9369fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0640 { void m(); };
extern T_func_009e0640 G1_func_009e0640;
void func_009e0640()
{
    G1_func_009e0640.m();
}
