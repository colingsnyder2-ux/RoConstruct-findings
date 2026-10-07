// roc 2011-06 00a37e50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37e50
//
// 00a37e50  b9d893cc00           mov ecx, 0xcc93d8
// 00a37e55  e916e8b8ff           jmp 0x5c6670
// auto-matched from its assembly shape

struct T_func_00a37e50 { void m(); };
extern T_func_00a37e50 G1_func_00a37e50;
void func_00a37e50()
{
    G1_func_00a37e50.m();
}
