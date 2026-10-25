// from server: 100% by colin
// roc 2010-06 009d5600  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5600
//
// 009d5600  6a00                 push 0
// 009d5602  6a0f                 push 0xf
// 009d5604  6858010000           push 0x158
// 009d5609  68f429a400           push 0xa429f4
// 009d560e  68a02aa400           push 0xa42aa0
// 009d5613  b920f6c100           mov ecx, 0xc1f620
// 009d5618  e82326ceff           call 0x6b7c40
// 009d561d  6890659e00           push 0x9e6590
// 009d5622  e83c34ddff           call 0x7a8a63
// 009d5627  59                   pop ecx
// 009d5628  c3                   ret 

extern int g_009d5600_0;
extern int g_009d5600_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5600(void*);
struct O_009d5600 { int m(void*, void*, int, int, int); };
extern O_009d5600 g_obj_009d5600;
extern int g_tail_009d5600;
void func_009d5600()
{
    g_obj_009d5600.m((void*)&g_009d5600_0, (void*)&g_009d5600_1, 344, 15, 0);
    tail_fn_009d5600(&g_tail_009d5600);
}