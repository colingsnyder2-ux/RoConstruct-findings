// from server: 100% by colin
// roc 2011-06 00a2b9b0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b9b0
//
// 00a2b9b0  6a00                 push 0
// 00a2b9b2  6a1f                 push 0x1f
// 00a2b9b4  6864010000           push 0x164
// 00a2b9b9  6880d2aa00           push 0xaad280
// 00a2b9be  689806a800           push 0xa80698
// 00a2b9c3  b9702ecd00           mov ecx, 0xcd2e70
// 00a2b9c8  e80371cdff           call 0x702ad0
// 00a2b9cd  68e0dea300           push 0xa3dee0
// 00a2b9d2  e886f7ddff           call 0x80b15d
// 00a2b9d7  59                   pop ecx
// 00a2b9d8  c3                   ret 

extern int g_00a2b9b0_0;
extern int g_00a2b9b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b9b0(void*);
struct O_00a2b9b0 { int m(void*, void*, int, int, int); };
extern O_00a2b9b0 g_obj_00a2b9b0;
extern int g_tail_00a2b9b0;
void func_00a2b9b0()
{
    g_obj_00a2b9b0.m((void*)&g_00a2b9b0_0, (void*)&g_00a2b9b0_1, 356, 31, 0);
    tail_fn_00a2b9b0(&g_tail_00a2b9b0);
}