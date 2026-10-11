// from server: 100% by colin
// roc 2009-06 008913f0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008913f0
//
// 008913f0  6a07                 push 7
// 008913f2  6880010000           push 0x180
// 008913f7  68d0788e00           push 0x8e78d0
// 008913fc  68e4788e00           push 0x8e78e4
// 00891401  b990efa400           mov ecx, 0xa4ef90
// 00891406  e8f51de0ff           call 0x693200
// 0089140b  68a0c38900           push 0x89c3a0
// 00891410  e8e686e8ff           call 0x719afb
// 00891415  59                   pop ecx
// 00891416  c3                   ret 

extern int g_008913f0_0;
extern int g_008913f0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008913f0(void*);
struct O_008913f0 { int m(void*, void*, int, int); };
extern O_008913f0 g_obj_008913f0;
extern int g_tail_008913f0;
void func_008913f0()
{
    g_obj_008913f0.m((void*)&g_008913f0_0, (void*)&g_008913f0_1, 384, 7);
    tail_fn_008913f0(&g_tail_008913f0);
}