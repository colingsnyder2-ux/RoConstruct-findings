// from server: 100% by colin
// roc 2010-06 009d58d0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d58d0
//
// 009d58d0  6a00                 push 0
// 009d58d2  6a0f                 push 0xf
// 009d58d4  6858010000           push 0x158
// 009d58d9  68f429a400           push 0xa429f4
// 009d58de  68fc2aa400           push 0xa42afc
// 009d58e3  b9c8f8c100           mov ecx, 0xc1f8c8
// 009d58e8  e80329ceff           call 0x6b81f0
// 009d58ed  68f0669e00           push 0x9e66f0
// 009d58f2  e86c31ddff           call 0x7a8a63
// 009d58f7  59                   pop ecx
// 009d58f8  c3                   ret 

extern int g_009d58d0_0;
extern int g_009d58d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d58d0(void*);
struct O_009d58d0 { int m(void*, void*, int, int, int); };
extern O_009d58d0 g_obj_009d58d0;
extern int g_tail_009d58d0;
void func_009d58d0()
{
    g_obj_009d58d0.m((void*)&g_009d58d0_0, (void*)&g_009d58d0_1, 344, 15, 0);
    tail_fn_009d58d0(&g_tail_009d58d0);
}