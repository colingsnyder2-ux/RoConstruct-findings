// roc 2010-06 00989a40  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00989a40
//
// 00989a40  b90045c000           mov ecx, 0xc04500
// 00989a45  e97697b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00989a40 { void m(); };
extern T_func_00989a40 G1_func_00989a40;
void func_00989a40()
{
    G1_func_00989a40.m();
}
