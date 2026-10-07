// roc 2009-06 0089d600  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d600
//
// 0089d600  b9842ba500           mov ecx, 0xa52b84
// 0089d605  e9b6b5f7ff           jmp 0x818bc0
// auto-matched from its assembly shape

struct T_func_0089d600 { void m(); };
extern T_func_0089d600 G1_func_0089d600;
void func_0089d600()
{
    G1_func_0089d600.m();
}
