// roc 2011-06 00a37da0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37da0
//
// 00a37da0  b9109bcc00           mov ecx, 0xcc9b10
// 00a37da5  e9a606b9ff           jmp 0x5c8450
// auto-matched from its assembly shape

struct T_func_00a37da0 { void m(); };
extern T_func_00a37da0 G1_func_00a37da0;
void func_00a37da0()
{
    G1_func_00a37da0.m();
}
