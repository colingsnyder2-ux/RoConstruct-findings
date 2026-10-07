// roc 2010-06 0099610e  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099610e
//
// 0099610e  b97488c100           mov ecx, 0xc18874
// 00996113  e948a6daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_0099610e { void m(); };
extern T_func_0099610e G1_func_0099610e;
void func_0099610e()
{
    G1_func_0099610e.m();
}
