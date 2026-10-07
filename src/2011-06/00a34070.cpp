// roc 2011-06 00a34070  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34070
//
// 00a34070  b9f885cb00           mov ecx, 0xcb85f8
// 00a34075  e94690a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a34070 { void m(); };
extern T_func_00a34070 G1_func_00a34070;
void func_00a34070()
{
    G1_func_00a34070.m();
}
