// from server: 100% by colin
// roc 2010-06 009d55a0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d55a0
//
// 009d55a0  6a00                 push 0
// 009d55a2  6a0f                 push 0xf
// 009d55a4  6860010000           push 0x160
// 009d55a9  68f429a400           push 0xa429f4
// 009d55ae  68a42aa400           push 0xa42aa4
// 009d55b3  b9c0f6c100           mov ecx, 0xc1f6c0
// 009d55b8  e8e324ceff           call 0x6b7aa0
// 009d55bd  6850659e00           push 0x9e6550
// 009d55c2  e89c34ddff           call 0x7a8a63
// 009d55c7  59                   pop ecx
// 009d55c8  c3                   ret 

extern int g_009d55a0_0;
extern int g_009d55a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d55a0(void*);
struct O_009d55a0 { int m(void*, void*, int, int, int); };
extern O_009d55a0 g_obj_009d55a0;
extern int g_tail_009d55a0;
void func_009d55a0()
{
    g_obj_009d55a0.m((void*)&g_009d55a0_0, (void*)&g_009d55a0_1, 352, 15, 0);
    tail_fn_009d55a0(&g_tail_009d55a0);
}