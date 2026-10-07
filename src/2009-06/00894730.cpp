// roc 2009-06 00894730  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894730
//
// 00894730  b930aca300           mov ecx, 0xa3ac30
// 00894735  e9f6d1baff           jmp 0x441930
// auto-matched from its assembly shape

struct T_func_00894730 { void m(); };
extern T_func_00894730 G1_func_00894730;
void func_00894730()
{
    G1_func_00894730.m();
}
