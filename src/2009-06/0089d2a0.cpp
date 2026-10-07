// roc 2009-06 0089d2a0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d2a0
//
// 0089d2a0  b91007a500           mov ecx, 0xa50710
// 0089d2a5  e9766fb8ff           jmp 0x424220
// auto-matched from its assembly shape

struct T_func_0089d2a0 { void m(); };
extern T_func_0089d2a0 G1_func_0089d2a0;
void func_0089d2a0()
{
    G1_func_0089d2a0.m();
}
