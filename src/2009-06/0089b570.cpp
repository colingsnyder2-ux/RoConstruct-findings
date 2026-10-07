// roc 2009-06 0089b570  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b570
//
// 0089b570  b938d7a400           mov ecx, 0xa4d738
// 0089b575  e976d5dcff           jmp 0x668af0
// auto-matched from its assembly shape

struct T_func_0089b570 { void m(); };
extern T_func_0089b570 G1_func_0089b570;
void func_0089b570()
{
    G1_func_0089b570.m();
}
