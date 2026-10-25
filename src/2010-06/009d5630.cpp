// from server: 100% by colin
// roc 2010-06 009d5630  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5630
//
// 009d5630  6a00                 push 0
// 009d5632  6a0f                 push 0xf
// 009d5634  685c010000           push 0x15c
// 009d5639  68f429a400           push 0xa429f4
// 009d563e  68f801a000           push 0xa001f8
// 009d5643  b980f6c100           mov ecx, 0xc1f680
// 009d5648  e8f325ceff           call 0x6b7c40
// 009d564d  6870659e00           push 0x9e6570
// 009d5652  e80c34ddff           call 0x7a8a63
// 009d5657  59                   pop ecx
// 009d5658  c3                   ret 

extern int g_009d5630_0;
extern int g_009d5630_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5630(void*);
struct O_009d5630 { int m(void*, void*, int, int, int); };
extern O_009d5630 g_obj_009d5630;
extern int g_tail_009d5630;
void func_009d5630()
{
    g_obj_009d5630.m((void*)&g_009d5630_0, (void*)&g_009d5630_1, 348, 15, 0);
    tail_fn_009d5630(&g_tail_009d5630);
}