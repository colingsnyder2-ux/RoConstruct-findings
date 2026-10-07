// roc 2010-06 0098b840  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098b840
//
// 0098b840  b91864c000           mov ecx, 0xc06418
// 0098b845  e97679b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098b840 { void m(); };
extern T_func_0098b840 G1_func_0098b840;
void func_0098b840()
{
    G1_func_0098b840.m();
}
