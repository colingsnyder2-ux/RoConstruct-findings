// roc 2010-06 009e2670  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2670
//
// 009e2670  b90894c100           mov ecx, 0xc19408
// 009e2675  e9c61ec2ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e2670 { void m(); };
extern T_func_009e2670 G1_func_009e2670;
void func_009e2670()
{
    G1_func_009e2670.m();
}
