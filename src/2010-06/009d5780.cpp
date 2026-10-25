// from server: 100% by colin
// roc 2010-06 009d5780  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5780
//
// 009d5780  6a00                 push 0
// 009d5782  6a0f                 push 0xf
// 009d5784  6868010000           push 0x168
// 009d5789  68f429a400           push 0xa429f4
// 009d578e  68e02aa400           push 0xa42ae0
// 009d5793  b9a8f8c100           mov ecx, 0xc1f8a8
// 009d5798  e81327ceff           call 0x6b7eb0
// 009d579d  68f0659e00           push 0x9e65f0
// 009d57a2  e8bc32ddff           call 0x7a8a63
// 009d57a7  59                   pop ecx
// 009d57a8  c3                   ret 

extern int g_009d5780_0;
extern int g_009d5780_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5780(void*);
struct O_009d5780 { int m(void*, void*, int, int, int); };
extern O_009d5780 g_obj_009d5780;
extern int g_tail_009d5780;
void func_009d5780()
{
    g_obj_009d5780.m((void*)&g_009d5780_0, (void*)&g_009d5780_1, 360, 15, 0);
    tail_fn_009d5780(&g_tail_009d5780);
}