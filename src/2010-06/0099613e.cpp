// roc 2010-06 0099613e  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099613e
//
// 0099613e  b99088c100           mov ecx, 0xc18890
// 00996143  e918a6daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_0099613e { void m(); };
extern T_func_0099613e G1_func_0099613e;
void func_0099613e()
{
    G1_func_0099613e.m();
}
