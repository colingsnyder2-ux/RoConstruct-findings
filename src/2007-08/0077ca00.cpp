// roc 2007-08 0077ca00  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ca00
//
// 0077ca00  b9bc828c00           mov ecx, 0x8c82bc
// 0077ca05  e9168dfaff           jmp 0x725720
// auto-matched from its assembly shape

struct T_func_0077ca00 { void m(); };
extern T_func_0077ca00 G1_func_0077ca00;
void func_0077ca00()
{
    G1_func_0077ca00.m();
}
