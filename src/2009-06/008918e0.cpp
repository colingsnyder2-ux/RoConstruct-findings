// from server: 100% by colin
// roc 2009-06 008918e0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008918e0
//
// 008918e0  6a07                 push 7
// 008918e2  6860010000           push 0x160
// 008918e7  689c788e00           push 0x8e789c
// 008918ec  689c798e00           push 0x8e799c
// 008918f1  b930eda400           mov ecx, 0xa4ed30
// 008918f6  e82521e0ff           call 0x693a20
// 008918fb  68a0c58900           push 0x89c5a0
// 00891900  e8f681e8ff           call 0x719afb
// 00891905  59                   pop ecx
// 00891906  c3                   ret 

extern int g_008918e0_0;
extern int g_008918e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008918e0(void*);
struct O_008918e0 { int m(void*, void*, int, int); };
extern O_008918e0 g_obj_008918e0;
extern int g_tail_008918e0;
void func_008918e0()
{
    g_obj_008918e0.m((void*)&g_008918e0_0, (void*)&g_008918e0_1, 352, 7);
    tail_fn_008918e0(&g_tail_008918e0);
}