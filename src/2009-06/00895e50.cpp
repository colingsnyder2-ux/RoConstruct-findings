// roc 2009-06 00895e50  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895e50
//
// 00895e50  b998f0a300           mov ecx, 0xa3f098
// 00895e55  e9a6bddbff           jmp 0x651c00
// auto-matched from its assembly shape

struct T_func_00895e50 { void m(); };
extern T_func_00895e50 G1_func_00895e50;
void func_00895e50()
{
    G1_func_00895e50.m();
}
