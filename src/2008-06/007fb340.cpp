// roc 2008-06 007fb340  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb340
//
// 007fb340  b988fd9600           mov ecx, 0x96fd88
// 007fb345  e99681caff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fb340 { void m(); };
extern T_func_007fb340 G1_func_007fb340;
void func_007fb340()
{
    G1_func_007fb340.m();
}
