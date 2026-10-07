// roc 2007-08 00777510  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777510
//
// 00777510  b958b18b00           mov ecx, 0x8bb158
// 00777515  e9b668d2ff           jmp 0x49ddd0
// auto-matched from its assembly shape

struct T_func_00777510 { void m(); };
extern T_func_00777510 G1_func_00777510;
void func_00777510()
{
    G1_func_00777510.m();
}
