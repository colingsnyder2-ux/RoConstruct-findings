// roc 2011-06 00a37bf0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37bf0
//
// 00a37bf0  b9f0f4cb00           mov ecx, 0xcbf4f0
// 00a37bf5  e9465f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37bf0 { void m(); };
extern T_func_00a37bf0 G1_func_00a37bf0;
void func_00a37bf0()
{
    G1_func_00a37bf0.m();
}
