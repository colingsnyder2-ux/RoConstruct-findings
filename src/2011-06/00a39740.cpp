// roc 2011-06 00a39740  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39740
//
// 00a39740  b9d8b1cc00           mov ecx, 0xccb1d8
// 00a39745  e97639a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39740 { void m(); };
extern T_func_00a39740 G1_func_00a39740;
void func_00a39740()
{
    G1_func_00a39740.m();
}
