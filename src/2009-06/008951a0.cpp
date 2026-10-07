// roc 2009-06 008951a0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008951a0
//
// 008951a0  b980d8a300           mov ecx, 0xa3d880
// 008951a5  e966a6d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_008951a0 { void m(); };
extern T_func_008951a0 G1_func_008951a0;
void func_008951a0()
{
    G1_func_008951a0.m();
}
