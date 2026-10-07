// roc 2009-06 0089d740  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d740
//
// 0089d740  b9dc8ba500           mov ecx, 0xa58bdc
// 0089d745  e9c633cdff           jmp 0x570b10
// auto-matched from its assembly shape

struct T_func_0089d740 { void m(); };
extern T_func_0089d740 G1_func_0089d740;
void func_0089d740()
{
    G1_func_0089d740.m();
}
