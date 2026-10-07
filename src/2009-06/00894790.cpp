// roc 2009-06 00894790  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894790
//
// 00894790  b990a6a300           mov ecx, 0xa3a690
// 00894795  e9d6c7baff           jmp 0x440f70
// auto-matched from its assembly shape

struct T_func_00894790 { void m(); };
extern T_func_00894790 G1_func_00894790;
void func_00894790()
{
    G1_func_00894790.m();
}
