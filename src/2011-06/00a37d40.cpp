// roc 2011-06 00a37d40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37d40
//
// 00a37d40  b9009fcc00           mov ecx, 0xcc9f00
// 00a37d45  e97618b9ff           jmp 0x5c95c0
// auto-matched from its assembly shape

struct T_func_00a37d40 { void m(); };
extern T_func_00a37d40 G1_func_00a37d40;
void func_00a37d40()
{
    G1_func_00a37d40.m();
}
