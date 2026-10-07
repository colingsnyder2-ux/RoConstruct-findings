// roc 2010-06 0099607e  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099607e
//
// 0099607e  b9d065c000           mov ecx, 0xc065d0
// 00996083  e9d8a6daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_0099607e { void m(); };
extern T_func_0099607e G1_func_0099607e;
void func_0099607e()
{
    G1_func_0099607e.m();
}
