// roc 2009-06 00887a00  unit: seg_00880000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887a00
//
// 00887a00  b914e0a300           mov ecx, 0xa3e014
// 00887a05  e9363ce9ff           jmp 0x71b640
// auto-matched from its assembly shape

struct T_func_00887a00 { void m(); };
extern T_func_00887a00 G1_func_00887a00;
void func_00887a00()
{
    G1_func_00887a00.m();
}
