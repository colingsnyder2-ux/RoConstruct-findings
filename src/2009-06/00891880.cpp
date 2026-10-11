// from server: 100% by colin
// roc 2009-06 00891880  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891880
//
// 00891880  6a07                 push 7
// 00891882  6850010000           push 0x150
// 00891887  689c788e00           push 0x8e789c
// 0089188c  6860558c00           push 0x8c5560
// 00891891  b9acefa400           mov ecx, 0xa4efac
// 00891896  e8b520e0ff           call 0x693950
// 0089189b  68e0c58900           push 0x89c5e0
// 008918a0  e85682e8ff           call 0x719afb
// 008918a5  59                   pop ecx
// 008918a6  c3                   ret 

extern int g_00891880_0;
extern int g_00891880_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891880(void*);
struct O_00891880 { int m(void*, void*, int, int); };
extern O_00891880 g_obj_00891880;
extern int g_tail_00891880;
void func_00891880()
{
    g_obj_00891880.m((void*)&g_00891880_0, (void*)&g_00891880_1, 336, 7);
    tail_fn_00891880(&g_tail_00891880);
}