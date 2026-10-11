// from server: 100% by colin
// roc 2008-06 007f5620  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5620
//
// 007f5620  6a05                 push 5
// 007f5622  6839010000           push 0x139
// 007f5627  6848878100           push 0x818748
// 007f562c  680c888300           push 0x83880c
// 007f5631  b9fc769700           mov ecx, 0x9776fc
// 007f5636  e8b59cdcff           call 0x5bf2f0
// 007f563b  68e0e57f00           push 0x7fe5e0
// 007f5640  e86ac1eaff           call 0x6a17af
// 007f5645  59                   pop ecx
// 007f5646  c3                   ret 

extern int g_007f5620_0;
extern int g_007f5620_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f5620(void*);
struct O_007f5620 { int m(void*, void*, int, int); };
extern O_007f5620 g_obj_007f5620;
extern int g_tail_007f5620;
void func_007f5620()
{
    g_obj_007f5620.m((void*)&g_007f5620_0, (void*)&g_007f5620_1, 313, 5);
    tail_fn_007f5620(&g_tail_007f5620);
}