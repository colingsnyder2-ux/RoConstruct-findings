// roc 2010-06 009978b0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009978b0
//
// 009978b0  b9b88bc100           mov ecx, 0xc18bb8
// 009978b5  e906b9b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009978b0 { void m(); };
extern T_func_009978b0 G1_func_009978b0;
void func_009978b0()
{
    G1_func_009978b0.m();
}
