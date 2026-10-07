// roc 2010-06 0099616e  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099616e
//
// 0099616e  b99088c100           mov ecx, 0xc18890
// 00996173  e9e8a5daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_0099616e { void m(); };
extern T_func_0099616e G1_func_0099616e;
void func_0099616e()
{
    G1_func_0099616e.m();
}
