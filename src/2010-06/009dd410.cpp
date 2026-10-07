// roc 2010-06 009dd410  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd410
//
// 009dd410  b91062c000           mov ecx, 0xc06210
// 009dd415  e966d1a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dd410 { void m(); };
extern T_func_009dd410 G1_func_009dd410;
void func_009dd410()
{
    G1_func_009dd410.m();
}
