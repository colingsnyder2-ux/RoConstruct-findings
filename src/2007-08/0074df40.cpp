// roc 2007-08 0074df40  unit: seg_00740000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074df40
//
// 0074df40  b920fb8b00           mov ecx, 0x8bfb20
// 0074df45  e9f6e0d2ff           jmp 0x47c040
// auto-matched from its assembly shape

struct T_func_0074df40 { void m(); };
extern T_func_0074df40 G1_func_0074df40;
void func_0074df40()
{
    G1_func_0074df40.m();
}
