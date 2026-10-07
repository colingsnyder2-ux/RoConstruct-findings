// roc 2008-06 007fb760  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb760
//
// 007fb760  b928fe9600           mov ecx, 0x96fe28
// 007fb765  e9767dcaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fb760 { void m(); };
extern T_func_007fb760 G1_func_007fb760;
void func_007fb760()
{
    G1_func_007fb760.m();
}
