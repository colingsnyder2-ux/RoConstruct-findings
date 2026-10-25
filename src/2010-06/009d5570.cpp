// from server: 100% by colin
// roc 2010-06 009d5570  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5570
//
// 009d5570  6a00                 push 0
// 009d5572  6a0f                 push 0xf
// 009d5574  685c010000           push 0x15c
// 009d5579  68f429a400           push 0xa429f4
// 009d557e  68f801a000           push 0xa001f8
// 009d5583  b900f7c100           mov ecx, 0xc1f700
// 009d5588  e84324ceff           call 0x6b79d0
// 009d558d  6810659e00           push 0x9e6510
// 009d5592  e8cc34ddff           call 0x7a8a63
// 009d5597  59                   pop ecx
// 009d5598  c3                   ret 

extern int g_009d5570_0;
extern int g_009d5570_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5570(void*);
struct O_009d5570 { int m(void*, void*, int, int, int); };
extern O_009d5570 g_obj_009d5570;
extern int g_tail_009d5570;
void func_009d5570()
{
    g_obj_009d5570.m((void*)&g_009d5570_0, (void*)&g_009d5570_1, 348, 15, 0);
    tail_fn_009d5570(&g_tail_009d5570);
}