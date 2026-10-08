// roc 2007-08 0077a880  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a880
//
// 0077a880  b9a8348c00           mov ecx, 0x8c34a8
// 0077a885  e986cdc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077a880 { void m(); };
extern T_func_0077a880 G1_func_0077a880;
void func_0077a880()
{
    G1_func_0077a880.m();
}
