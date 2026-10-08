// roc 2007-08 0077a990  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a990
//
// 0077a990  b9184b8c00           mov ecx, 0x8c4b18
// 0077a995  e926c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a990 { void m(); };
extern T_func_0077a990 G1_func_0077a990;
void func_0077a990()
{
    G1_func_0077a990.m();
}
