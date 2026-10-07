// roc 2010-06 0098b820  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098b820
//
// 0098b820  b9e864c000           mov ecx, 0xc064e8
// 0098b825  e99679b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098b820 { void m(); };
extern T_func_0098b820 G1_func_0098b820;
void func_0098b820()
{
    G1_func_0098b820.m();
}
