// from server: 100% by colin
// roc 2010-06 009d58a0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d58a0
//
// 009d58a0  6a00                 push 0
// 009d58a2  6a0f                 push 0xf
// 009d58a4  6858010000           push 0x158
// 009d58a9  68f429a400           push 0xa429f4
// 009d58ae  68fc2aa400           push 0xa42afc
// 009d58b3  b980f5c100           mov ecx, 0xc1f580
// 009d58b8  e86328ceff           call 0x6b8120
// 009d58bd  68b0669e00           push 0x9e66b0
// 009d58c2  e89c31ddff           call 0x7a8a63
// 009d58c7  59                   pop ecx
// 009d58c8  c3                   ret 

extern int g_009d58a0_0;
extern int g_009d58a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d58a0(void*);
struct O_009d58a0 { int m(void*, void*, int, int, int); };
extern O_009d58a0 g_obj_009d58a0;
extern int g_tail_009d58a0;
void func_009d58a0()
{
    g_obj_009d58a0.m((void*)&g_009d58a0_0, (void*)&g_009d58a0_1, 344, 15, 0);
    tail_fn_009d58a0(&g_tail_009d58a0);
}