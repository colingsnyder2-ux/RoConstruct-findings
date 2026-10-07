// roc 2008-06 00800850  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800850
//
// 00800850  b9b8c09700           mov ecx, 0x97c0b8
// 00800855  e966a3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800850 { void m(); };
extern T_func_00800850 G1_func_00800850;
void func_00800850()
{
    G1_func_00800850.m();
}
