// roc 2010-06 009da930  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da930
//
// 009da930  b988fabf00           mov ecx, 0xbffa88
// 009da935  e9667ba2ff           jmp 0x4024a0
// auto-matched from its assembly shape

struct T_func_009da930 { void m(); };
extern T_func_009da930 G1_func_009da930;
void func_009da930()
{
    G1_func_009da930.m();
}
