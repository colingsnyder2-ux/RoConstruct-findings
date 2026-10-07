// roc 2011-06 00a3fd7a  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fd7a
//
// 00a3fd7a  b91093d100           mov ecx, 0xd19310
// 00a3fd7f  e9c439ecff           jmp 0x903748
// auto-matched from its assembly shape

struct T_func_00a3fd7a { void m(); };
extern T_func_00a3fd7a G1_func_00a3fd7a;
void func_00a3fd7a()
{
    G1_func_00a3fd7a.m();
}
