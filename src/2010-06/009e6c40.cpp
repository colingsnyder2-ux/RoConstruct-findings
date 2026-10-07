// roc 2010-06 009e6c40  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6c40
//
// 009e6c40  b978fdc100           mov ecx, 0xc1fd78
// 009e6c45  e926f9baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e6c40 { void m(); };
extern T_func_009e6c40 G1_func_009e6c40;
void func_009e6c40()
{
    G1_func_009e6c40.m();
}
