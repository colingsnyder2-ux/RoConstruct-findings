// roc 2009-06 00897290  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897290
//
// 00897290  b9d83ba400           mov ecx, 0xa43bd8
// 00897295  e9e662d3ff           jmp 0x5cd580
// auto-matched from its assembly shape

struct T_func_00897290 { void m(); };
extern T_func_00897290 G1_func_00897290;
void func_00897290()
{
    G1_func_00897290.m();
}
