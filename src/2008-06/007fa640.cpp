// roc 2008-06 007fa640  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa640
//
// 007fa640  b9c4ce9600           mov ecx, 0x96cec4
// 007fa645  e93697d5ff           jmp 0x553d80
// auto-matched from its assembly shape

struct T_func_007fa640 { void m(); };
extern T_func_007fa640 G1_func_007fa640;
void func_007fa640()
{
    G1_func_007fa640.m();
}
