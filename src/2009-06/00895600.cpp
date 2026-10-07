// roc 2009-06 00895600  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895600
//
// 00895600  b9a8dba300           mov ecx, 0xa3dba8
// 00895605  e9064db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895600 { void m(); };
extern T_func_00895600 G1_func_00895600;
void func_00895600()
{
    G1_func_00895600.m();
}
