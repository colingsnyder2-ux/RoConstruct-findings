// roc 2011-06 00a37550  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37550
//
// 00a37550  b9604ecc00           mov ecx, 0xcc4e60
// 00a37555  e9e6659dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37550 { void m(); };
extern T_func_00a37550 G1_func_00a37550;
void func_00a37550()
{
    G1_func_00a37550.m();
}
