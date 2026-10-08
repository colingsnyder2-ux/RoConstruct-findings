// roc 2007-08 0077ca90  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ca90
//
// 0077ca90  b9f0868c00           mov ecx, 0x8c86f0
// 0077ca95  e9e601edff           jmp 0x64cc80
// auto-matched from its assembly shape

struct T_func_0077ca90 { void m(); };
extern T_func_0077ca90 G1_func_0077ca90;
void func_0077ca90()
{
    G1_func_0077ca90.m();
}
