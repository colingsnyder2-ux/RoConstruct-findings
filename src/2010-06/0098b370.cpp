// roc 2010-06 0098b370  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098b370
//
// 0098b370  b9585ec000           mov ecx, 0xc05e58
// 0098b375  e9467eb1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098b370 { void m(); };
extern T_func_0098b370 G1_func_0098b370;
void func_0098b370()
{
    G1_func_0098b370.m();
}
