// from server: 100% by colin
// roc 2010-06 009d53e0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d53e0
//
// 009d53e0  6a00                 push 0
// 009d53e2  6a0f                 push 0xf
// 009d53e4  6894010000           push 0x194
// 009d53e9  68542aa400           push 0xa42a54
// 009d53ee  684c2aa400           push 0xa42a4c
// 009d53f3  b988f9c100           mov ecx, 0xc1f988
// 009d53f8  e83324ceff           call 0x6b7830
// 009d53fd  6890649e00           push 0x9e6490
// 009d5402  e85c36ddff           call 0x7a8a63
// 009d5407  59                   pop ecx
// 009d5408  c3                   ret 

extern int g_009d53e0_0;
extern int g_009d53e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d53e0(void*);
struct O_009d53e0 { int m(void*, void*, int, int, int); };
extern O_009d53e0 g_obj_009d53e0;
extern int g_tail_009d53e0;
void func_009d53e0()
{
    g_obj_009d53e0.m((void*)&g_009d53e0_0, (void*)&g_009d53e0_1, 404, 15, 0);
    tail_fn_009d53e0(&g_tail_009d53e0);
}