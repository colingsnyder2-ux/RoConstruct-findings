// roc 2011-06 00a3fd40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fd40
//
// 00a3fd40  b94092d100           mov ecx, 0xd19240
// 00a3fd45  e986e1eaff           jmp 0x8eded0
// auto-matched from its assembly shape

struct T_func_00a3fd40 { void m(); };
extern T_func_00a3fd40 G1_func_00a3fd40;
void func_00a3fd40()
{
    G1_func_00a3fd40.m();
}
