// from server: 100% by colin
// roc 2010-06 009c63b0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c63b0
//
// 009c63b0  6a00                 push 0
// 009c63b2  6a02                 push 2
// 009c63b4  68e4000000           push 0xe4
// 009c63b9  685c8ea100           push 0xa18e5c
// 009c63be  68b08ea100           push 0xa18eb0
// 009c63c3  b95848c000           mov ecx, 0xc04858
// 009c63c8  e80374aeff           call 0x4ad7d0
// 009c63cd  68a0c29d00           push 0x9dc2a0
// 009c63d2  e88c26deff           call 0x7a8a63
// 009c63d7  59                   pop ecx
// 009c63d8  c3                   ret 

extern int g_009c63b0_0;
extern int g_009c63b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c63b0(void*);
struct O_009c63b0 { int m(void*, void*, int, int, int); };
extern O_009c63b0 g_obj_009c63b0;
extern int g_tail_009c63b0;
void func_009c63b0()
{
    g_obj_009c63b0.m((void*)&g_009c63b0_0, (void*)&g_009c63b0_1, 228, 2, 0);
    tail_fn_009c63b0(&g_tail_009c63b0);
}