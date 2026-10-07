// roc 2011-06 00a37230  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37230
//
// 00a37230  b99078cc00           mov ecx, 0xcc7890
// 00a37235  e906699dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37230 { void m(); };
extern T_func_00a37230 G1_func_00a37230;
void func_00a37230()
{
    G1_func_00a37230.m();
}
