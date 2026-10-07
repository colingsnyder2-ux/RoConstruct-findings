// roc 2011-06 00a37520  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37520
//
// 00a37520  b9e850cc00           mov ecx, 0xcc50e8
// 00a37525  e916669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37520 { void m(); };
extern T_func_00a37520 G1_func_00a37520;
void func_00a37520()
{
    G1_func_00a37520.m();
}
