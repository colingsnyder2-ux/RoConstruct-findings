// roc 2011-06 00a37250  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37250
//
// 00a37250  b9e076cc00           mov ecx, 0xcc76e0
// 00a37255  e9e6689dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37250 { void m(); };
extern T_func_00a37250 G1_func_00a37250;
void func_00a37250()
{
    G1_func_00a37250.m();
}
