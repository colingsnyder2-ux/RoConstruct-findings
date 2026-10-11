// from server: 100% by colin
// roc 2009-06 008917f0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008917f0
//
// 008917f0  6a07                 push 7
// 008917f2  6860010000           push 0x160
// 008917f7  689c788e00           push 0x8e789c
// 008917fc  6890798e00           push 0x8e7990
// 00891801  b9c8efa400           mov ecx, 0xa4efc8
// 00891806  e87520e0ff           call 0x693880
// 0089180b  6840c58900           push 0x89c540
// 00891810  e8e682e8ff           call 0x719afb
// 00891815  59                   pop ecx
// 00891816  c3                   ret 

extern int g_008917f0_0;
extern int g_008917f0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008917f0(void*);
struct O_008917f0 { int m(void*, void*, int, int); };
extern O_008917f0 g_obj_008917f0;
extern int g_tail_008917f0;
void func_008917f0()
{
    g_obj_008917f0.m((void*)&g_008917f0_0, (void*)&g_008917f0_1, 352, 7);
    tail_fn_008917f0(&g_tail_008917f0);
}