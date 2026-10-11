// from server: 100% by colin
// roc 2009-06 008916a0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008916a0
//
// 008916a0  6a07                 push 7
// 008916a2  6854010000           push 0x154
// 008916a7  689c788e00           push 0x8e789c
// 008916ac  6810cb8a00           push 0x8acb10
// 008916b1  b9d8eda400           mov ecx, 0xa4edd8
// 008916b6  e8551fe0ff           call 0x693610
// 008916bb  68c0c48900           push 0x89c4c0
// 008916c0  e83684e8ff           call 0x719afb
// 008916c5  59                   pop ecx
// 008916c6  c3                   ret 

extern int g_008916a0_0;
extern int g_008916a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008916a0(void*);
struct O_008916a0 { int m(void*, void*, int, int); };
extern O_008916a0 g_obj_008916a0;
extern int g_tail_008916a0;
void func_008916a0()
{
    g_obj_008916a0.m((void*)&g_008916a0_0, (void*)&g_008916a0_1, 340, 7);
    tail_fn_008916a0(&g_tail_008916a0);
}