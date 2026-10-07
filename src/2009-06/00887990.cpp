// roc 2009-06 00887990  unit: seg_00880000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887990
//
// 00887990  b915e0a300           mov ecx, 0xa3e015
// 00887995  e9a63ce9ff           jmp 0x71b640
// auto-matched from its assembly shape

struct T_func_00887990 { void m(); };
extern T_func_00887990 G1_func_00887990;
void func_00887990()
{
    G1_func_00887990.m();
}
