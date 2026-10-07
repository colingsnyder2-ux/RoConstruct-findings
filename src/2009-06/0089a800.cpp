// roc 2009-06 0089a800  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a800
//
// 0089a800  b9d0c7a400           mov ecx, 0xa4c7d0
// 0089a805  e906fbb6ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_0089a800 { void m(); };
extern T_func_0089a800 G1_func_0089a800;
void func_0089a800()
{
    G1_func_0089a800.m();
}
