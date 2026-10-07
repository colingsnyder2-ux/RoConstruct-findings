// roc 2009-06 0089d2d0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d2d0
//
// 0089d2d0  b96007a500           mov ecx, 0xa50760
// 0089d2d5  e9563fe7ff           jmp 0x711230
// auto-matched from its assembly shape

struct T_func_0089d2d0 { void m(); };
extern T_func_0089d2d0 G1_func_0089d2d0;
void func_0089d2d0()
{
    G1_func_0089d2d0.m();
}
