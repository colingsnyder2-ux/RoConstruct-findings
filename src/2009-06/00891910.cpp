// from server: 100% by colin
// roc 2009-06 00891910  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891910
//
// 00891910  6a07                 push 7
// 00891912  6850010000           push 0x150
// 00891917  689c788e00           push 0x8e789c
// 0089191c  68ac798e00           push 0x8e79ac
// 00891921  b968eda400           mov ecx, 0xa4ed68
// 00891926  e8c521e0ff           call 0x693af0
// 0089192b  6800c68900           push 0x89c600
// 00891930  e8c681e8ff           call 0x719afb
// 00891935  59                   pop ecx
// 00891936  c3                   ret 

extern int g_00891910_0;
extern int g_00891910_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891910(void*);
struct O_00891910 { int m(void*, void*, int, int); };
extern O_00891910 g_obj_00891910;
extern int g_tail_00891910;
void func_00891910()
{
    g_obj_00891910.m((void*)&g_00891910_0, (void*)&g_00891910_1, 336, 7);
    tail_fn_00891910(&g_tail_00891910);
}