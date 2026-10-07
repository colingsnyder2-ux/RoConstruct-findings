// roc 2011-06 00a35700  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35700
//
// 00a35700  b908ddcb00           mov ecx, 0xcbdd08
// 00a35705  e9066ea7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35700 { void m(); };
extern T_func_00a35700 G1_func_00a35700;
void func_00a35700()
{
    G1_func_00a35700.m();
}
