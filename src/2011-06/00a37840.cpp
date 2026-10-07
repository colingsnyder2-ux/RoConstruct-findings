// roc 2011-06 00a37840  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37840
//
// 00a37840  b9b826cc00           mov ecx, 0xcc26b8
// 00a37845  e9f6629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37840 { void m(); };
extern T_func_00a37840 G1_func_00a37840;
void func_00a37840()
{
    G1_func_00a37840.m();
}
