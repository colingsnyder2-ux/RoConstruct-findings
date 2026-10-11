// from server: 100% by colin
// roc 2009-06 008915e0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008915e0
//
// 008915e0  6a07                 push 7
// 008915e2  6854010000           push 0x154
// 008915e7  689c788e00           push 0x8e789c
// 008915ec  6810cb8a00           push 0x8acb10
// 008915f1  b948eea400           mov ecx, 0xa4ee48
// 008915f6  e8a51de0ff           call 0x6933a0
// 008915fb  6860c48900           push 0x89c460
// 00891600  e8f684e8ff           call 0x719afb
// 00891605  59                   pop ecx
// 00891606  c3                   ret 

extern int g_008915e0_0;
extern int g_008915e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008915e0(void*);
struct O_008915e0 { int m(void*, void*, int, int); };
extern O_008915e0 g_obj_008915e0;
extern int g_tail_008915e0;
void func_008915e0()
{
    g_obj_008915e0.m((void*)&g_008915e0_0, (void*)&g_008915e0_1, 340, 7);
    tail_fn_008915e0(&g_tail_008915e0);
}