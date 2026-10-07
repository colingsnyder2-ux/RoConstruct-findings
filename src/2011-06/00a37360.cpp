// roc 2011-06 00a37360  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37360
//
// 00a37360  b98868cc00           mov ecx, 0xcc6888
// 00a37365  e9d6679dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37360 { void m(); };
extern T_func_00a37360 G1_func_00a37360;
void func_00a37360()
{
    G1_func_00a37360.m();
}
