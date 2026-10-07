// roc 2008-06 007fd050  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd050
//
// 007fd050  b9e8479700           mov ecx, 0x9747e8
// 007fd055  e966dbc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fd050 { void m(); };
extern T_func_007fd050 G1_func_007fd050;
void func_007fd050()
{
    G1_func_007fd050.m();
}
