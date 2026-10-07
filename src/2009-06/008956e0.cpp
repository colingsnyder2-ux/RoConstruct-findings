// roc 2009-06 008956e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008956e0
//
// 008956e0  b9d8dca300           mov ecx, 0xa3dcd8
// 008956e5  e926a1d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_008956e0 { void m(); };
extern T_func_008956e0 G1_func_008956e0;
void func_008956e0()
{
    G1_func_008956e0.m();
}
