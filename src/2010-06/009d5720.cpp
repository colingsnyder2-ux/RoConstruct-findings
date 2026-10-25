// from server: 100% by colin
// roc 2010-06 009d5720  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5720
//
// 009d5720  6a00                 push 0
// 009d5722  6a0f                 push 0xf
// 009d5724  6858010000           push 0x158
// 009d5729  68f429a400           push 0xa429f4
// 009d572e  68a02aa400           push 0xa42aa0
// 009d5733  b9e0f6c100           mov ecx, 0xc1f6e0
// 009d5738  e8a326ceff           call 0x6b7de0
// 009d573d  6830669e00           push 0x9e6630
// 009d5742  e81c33ddff           call 0x7a8a63
// 009d5747  59                   pop ecx
// 009d5748  c3                   ret 

extern int g_009d5720_0;
extern int g_009d5720_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5720(void*);
struct O_009d5720 { int m(void*, void*, int, int, int); };
extern O_009d5720 g_obj_009d5720;
extern int g_tail_009d5720;
void func_009d5720()
{
    g_obj_009d5720.m((void*)&g_009d5720_0, (void*)&g_009d5720_1, 344, 15, 0);
    tail_fn_009d5720(&g_tail_009d5720);
}