// roc 2011-06 00a37540  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37540
//
// 00a37540  b9384fcc00           mov ecx, 0xcc4f38
// 00a37545  e9f6659dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37540 { void m(); };
extern T_func_00a37540 G1_func_00a37540;
void func_00a37540()
{
    G1_func_00a37540.m();
}
