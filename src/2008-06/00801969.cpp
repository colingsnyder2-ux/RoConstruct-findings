// roc 2008-06 00801969  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801969
//
// 00801969  b914f39700           mov ecx, 0x97f314
// 0080196e  e94b48faff           jmp 0x7a61be
// auto-matched from its assembly shape

struct T_func_00801969 { void m(); };
extern T_func_00801969 G1_func_00801969;
void func_00801969()
{
    G1_func_00801969.m();
}
