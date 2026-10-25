// from server: 100% by colin
// roc 2010-06 009d01d0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d01d0
//
// 009d01d0  6a00                 push 0
// 009d01d2  6a0f                 push 0xf
// 009d01d4  68a8000000           push 0xa8
// 009d01d9  683c60a300           push 0xa3603c
// 009d01de  687860a300           push 0xa36078
// 009d01e3  b96caec100           mov ecx, 0xc1ae6c
// 009d01e8  e86321c6ff           call 0x632350
// 009d01ed  68d0359e00           push 0x9e35d0
// 009d01f2  e86c88ddff           call 0x7a8a63
// 009d01f7  59                   pop ecx
// 009d01f8  c3                   ret 

extern int g_009d01d0_0;
extern int g_009d01d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d01d0(void*);
struct O_009d01d0 { int m(void*, void*, int, int, int); };
extern O_009d01d0 g_obj_009d01d0;
extern int g_tail_009d01d0;
void func_009d01d0()
{
    g_obj_009d01d0.m((void*)&g_009d01d0_0, (void*)&g_009d01d0_1, 168, 15, 0);
    tail_fn_009d01d0(&g_tail_009d01d0);
}