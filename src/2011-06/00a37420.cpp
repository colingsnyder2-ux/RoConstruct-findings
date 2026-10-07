// roc 2011-06 00a37420  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37420
//
// 00a37420  b9685ecc00           mov ecx, 0xcc5e68
// 00a37425  e916679dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37420 { void m(); };
extern T_func_00a37420 G1_func_00a37420;
void func_00a37420()
{
    G1_func_00a37420.m();
}
