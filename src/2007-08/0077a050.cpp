// roc 2007-08 0077a050  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a050
//
// 0077a050  b9e8258c00           mov ecx, 0x8c25e8
// 0077a055  e966ccc9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a050 { void m(); };
extern T_func_0077a050 G1_func_0077a050;
void func_0077a050()
{
    G1_func_0077a050.m();
}
