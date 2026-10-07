// roc 2010-06 009e5130  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5130
//
// 009e5130  b960d0c100           mov ecx, 0xc1d060
// 009e5135  e906f4c1ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e5130 { void m(); };
extern T_func_009e5130 G1_func_009e5130;
void func_009e5130()
{
    G1_func_009e5130.m();
}
