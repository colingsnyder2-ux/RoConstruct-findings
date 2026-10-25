// from server: 100% by colin
// roc 2010-06 009d5470  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5470
//
// 009d5470  6a00                 push 0
// 009d5472  6a0f                 push 0xf
// 009d5474  68a8010000           push 0x1a8
// 009d5479  68f429a400           push 0xa429f4
// 009d547e  68702aa400           push 0xa42a70
// 009d5483  b900f6c100           mov ecx, 0xc1f600
// 009d5488  e8a323ceff           call 0x6b7830
// 009d548d  68d0649e00           push 0x9e64d0
// 009d5492  e8cc35ddff           call 0x7a8a63
// 009d5497  59                   pop ecx
// 009d5498  c3                   ret 

extern int g_009d5470_0;
extern int g_009d5470_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5470(void*);
struct O_009d5470 { int m(void*, void*, int, int, int); };
extern O_009d5470 g_obj_009d5470;
extern int g_tail_009d5470;
void func_009d5470()
{
    g_obj_009d5470.m((void*)&g_009d5470_0, (void*)&g_009d5470_1, 424, 15, 0);
    tail_fn_009d5470(&g_tail_009d5470);
}