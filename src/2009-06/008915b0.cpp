// from server: 100% by colin
// roc 2009-06 008915b0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008915b0
//
// 008915b0  6a07                 push 7
// 008915b2  6850010000           push 0x150
// 008915b7  689c788e00           push 0x8e789c
// 008915bc  6860558c00           push 0x8c5560
// 008915c1  b9c0eca400           mov ecx, 0xa4ecc0
// 008915c6  e8d51de0ff           call 0x6933a0
// 008915cb  6880c48900           push 0x89c480
// 008915d0  e82685e8ff           call 0x719afb
// 008915d5  59                   pop ecx
// 008915d6  c3                   ret 

extern int g_008915b0_0;
extern int g_008915b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008915b0(void*);
struct O_008915b0 { int m(void*, void*, int, int); };
extern O_008915b0 g_obj_008915b0;
extern int g_tail_008915b0;
void func_008915b0()
{
    g_obj_008915b0.m((void*)&g_008915b0_0, (void*)&g_008915b0_1, 336, 7);
    tail_fn_008915b0(&g_tail_008915b0);
}