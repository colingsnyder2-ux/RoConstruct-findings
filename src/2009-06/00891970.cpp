// from server: 100% by colin
// roc 2009-06 00891970  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891970
//
// 00891970  6a07                 push 7
// 00891972  685c010000           push 0x15c
// 00891977  689c788e00           push 0x8e789c
// 0089197c  68f48a8d00           push 0x8d8af4
// 00891981  b9c8eea400           mov ecx, 0xa4eec8
// 00891986  e83522e0ff           call 0x693bc0
// 0089198b  6820c68900           push 0x89c620
// 00891990  e86681e8ff           call 0x719afb
// 00891995  59                   pop ecx
// 00891996  c3                   ret 

extern int g_00891970_0;
extern int g_00891970_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891970(void*);
struct O_00891970 { int m(void*, void*, int, int); };
extern O_00891970 g_obj_00891970;
extern int g_tail_00891970;
void func_00891970()
{
    g_obj_00891970.m((void*)&g_00891970_0, (void*)&g_00891970_1, 348, 7);
    tail_fn_00891970(&g_tail_00891970);
}