// roc 2010-06 0099b370  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099b370
//
// 0099b370  b978a3c100           mov ecx, 0xc1a378
// 0099b375  e9467eb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099b370 { void m(); };
extern T_func_0099b370 G1_func_0099b370;
void func_0099b370()
{
    G1_func_0099b370.m();
}
