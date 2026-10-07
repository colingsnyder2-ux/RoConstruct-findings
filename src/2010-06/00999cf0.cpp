// roc 2010-06 00999cf0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00999cf0
//
// 00999cf0  b9089cc100           mov ecx, 0xc19c08
// 00999cf5  e9c694b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00999cf0 { void m(); };
extern T_func_00999cf0 G1_func_00999cf0;
void func_00999cf0()
{
    G1_func_00999cf0.m();
}
