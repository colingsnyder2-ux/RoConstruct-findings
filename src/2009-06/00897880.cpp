// roc 2009-06 00897880  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897880
//
// 00897880  b91846a400           mov ecx, 0xa44618
// 00897885  e9867fd3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00897880 { void m(); };
extern T_func_00897880 G1_func_00897880;
void func_00897880()
{
    G1_func_00897880.m();
}
