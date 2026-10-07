// roc 2010-06 009d9260  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9260
//
// 009d9260  b92b34c200           mov ecx, 0xc2342b
// 009d9265  e97623d3ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009d9260 { void m(); };
extern T_func_009d9260 G1_func_009d9260;
void func_009d9260()
{
    G1_func_009d9260.m();
}
