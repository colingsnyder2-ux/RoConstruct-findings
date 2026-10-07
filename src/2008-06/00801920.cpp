// roc 2008-06 00801920  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801920
//
// 00801920  b924f29700           mov ecx, 0x97f224
// 00801925  e99ca8fbff           jmp 0x7bc1c6
// auto-matched from its assembly shape

struct T_func_00801920 { void m(); };
extern T_func_00801920 G1_func_00801920;
void func_00801920()
{
    G1_func_00801920.m();
}
