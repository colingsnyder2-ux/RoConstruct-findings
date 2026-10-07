// roc 2011-06 00a3c990  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c990
//
// 00a3c990  b9b00bcd00           mov ecx, 0xcd0bb0
// 00a3c995  e976fba6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c990 { void m(); };
extern T_func_00a3c990 G1_func_00a3c990;
void func_00a3c990()
{
    G1_func_00a3c990.m();
}
