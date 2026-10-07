// roc 2008-06 007d3e50  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d3e50
//
// 007d3e50  b938719700           mov ecx, 0x977138
// 007d3e55  e9f65ac3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d3e50 { void m(); };
extern T_func_007d3e50 G1_func_007d3e50;
void func_007d3e50()
{
    G1_func_007d3e50.m();
}
