// roc 2008-06 0080194a  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0080194a
//
// 0080194a  b9a8f29700           mov ecx, 0x97f2a8
// 0080194f  e91743faff           jmp 0x7a5c6b
// auto-matched from its assembly shape

struct T_func_0080194a { void m(); };
extern T_func_0080194a G1_func_0080194a;
void func_0080194a()
{
    G1_func_0080194a.m();
}
