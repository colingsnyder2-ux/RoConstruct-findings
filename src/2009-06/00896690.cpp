// roc 2009-06 00896690  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896690
//
// 00896690  b96019a400           mov ecx, 0xa41960
// 00896695  e9763cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00896690 { void m(); };
extern T_func_00896690 G1_func_00896690;
void func_00896690()
{
    G1_func_00896690.m();
}
