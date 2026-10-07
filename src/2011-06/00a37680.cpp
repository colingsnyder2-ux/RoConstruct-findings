// roc 2011-06 00a37680  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37680
//
// 00a37680  b9583ecc00           mov ecx, 0xcc3e58
// 00a37685  e9b6649dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37680 { void m(); };
extern T_func_00a37680 G1_func_00a37680;
void func_00a37680()
{
    G1_func_00a37680.m();
}
