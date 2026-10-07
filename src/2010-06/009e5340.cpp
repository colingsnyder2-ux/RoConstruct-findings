// roc 2010-06 009e5340  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5340
//
// 009e5340  b958ddc100           mov ecx, 0xc1dd58
// 009e5345  e92612bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e5340 { void m(); };
extern T_func_009e5340 G1_func_009e5340;
void func_009e5340()
{
    G1_func_009e5340.m();
}
