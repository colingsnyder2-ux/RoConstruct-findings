// from server: 100% by colin
// roc 2009-06 008918b0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008918b0
//
// 008918b0  6a07                 push 7
// 008918b2  6854010000           push 0x154
// 008918b7  689c788e00           push 0x8e789c
// 008918bc  6848798e00           push 0x8e7948
// 008918c1  b914eda400           mov ecx, 0xa4ed14
// 008918c6  e85521e0ff           call 0x693a20
// 008918cb  68c0c58900           push 0x89c5c0
// 008918d0  e82682e8ff           call 0x719afb
// 008918d5  59                   pop ecx
// 008918d6  c3                   ret 

extern int g_008918b0_0;
extern int g_008918b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008918b0(void*);
struct O_008918b0 { int m(void*, void*, int, int); };
extern O_008918b0 g_obj_008918b0;
extern int g_tail_008918b0;
void func_008918b0()
{
    g_obj_008918b0.m((void*)&g_008918b0_0, (void*)&g_008918b0_1, 340, 7);
    tail_fn_008918b0(&g_tail_008918b0);
}