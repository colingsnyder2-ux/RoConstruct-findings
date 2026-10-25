// from server: 100% by colin
// roc 2010-06 009d5810  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5810
//
// 009d5810  6a00                 push 0
// 009d5812  6a0f                 push 0xf
// 009d5814  6858010000           push 0x158
// 009d5819  68f429a400           push 0xa429f4
// 009d581e  68a02aa400           push 0xa42aa0
// 009d5823  b988f8c100           mov ecx, 0xc1f888
// 009d5828  e85327ceff           call 0x6b7f80
// 009d582d  6890669e00           push 0x9e6690
// 009d5832  e82c32ddff           call 0x7a8a63
// 009d5837  59                   pop ecx
// 009d5838  c3                   ret 

extern int g_009d5810_0;
extern int g_009d5810_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5810(void*);
struct O_009d5810 { int m(void*, void*, int, int, int); };
extern O_009d5810 g_obj_009d5810;
extern int g_tail_009d5810;
void func_009d5810()
{
    g_obj_009d5810.m((void*)&g_009d5810_0, (void*)&g_009d5810_1, 344, 15, 0);
    tail_fn_009d5810(&g_tail_009d5810);
}