// roc 2010-06 009dd0e0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd0e0
//
// 009dd0e0  b9f85dc000           mov ecx, 0xc05df8
// 009dd0e5  e9c66aafff           jmp 0x4d3bb0
// auto-matched from its assembly shape

struct T_func_009dd0e0 { void m(); };
extern T_func_009dd0e0 G1_func_009dd0e0;
void func_009dd0e0()
{
    G1_func_009dd0e0.m();
}
