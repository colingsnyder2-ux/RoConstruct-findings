// roc 2011-06 00a37ef0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37ef0
//
// 00a37ef0  b9488dcc00           mov ecx, 0xcc8d48
// 00a37ef5  e966cdb8ff           jmp 0x5c4c60
// auto-matched from its assembly shape

struct T_func_00a37ef0 { void m(); };
extern T_func_00a37ef0 G1_func_00a37ef0;
void func_00a37ef0()
{
    G1_func_00a37ef0.m();
}
