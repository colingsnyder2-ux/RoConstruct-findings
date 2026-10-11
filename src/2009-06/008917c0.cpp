// from server: 100% by colin
// roc 2009-06 008917c0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008917c0
//
// 008917c0  6a07                 push 7
// 008917c2  6854010000           push 0x154
// 008917c7  689c788e00           push 0x8e789c
// 008917cc  685c798e00           push 0x8e795c
// 008917d1  b900f0a400           mov ecx, 0xa4f000
// 008917d6  e8a520e0ff           call 0x693880
// 008917db  6860c58900           push 0x89c560
// 008917e0  e81683e8ff           call 0x719afb
// 008917e5  59                   pop ecx
// 008917e6  c3                   ret 

extern int g_008917c0_0;
extern int g_008917c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008917c0(void*);
struct O_008917c0 { int m(void*, void*, int, int); };
extern O_008917c0 g_obj_008917c0;
extern int g_tail_008917c0;
void func_008917c0()
{
    g_obj_008917c0.m((void*)&g_008917c0_0, (void*)&g_008917c0_1, 340, 7);
    tail_fn_008917c0(&g_tail_008917c0);
}