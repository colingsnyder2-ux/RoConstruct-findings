// from server: 100% by colin
// roc 2010-06 009d41d0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d41d0
//
// 009d41d0  6a00                 push 0
// 009d41d2  6a0f                 push 0xf
// 009d41d4  68b4000000           push 0xb4
// 009d41d9  68d403a300           push 0xa303d4
// 009d41de  6894f5a300           push 0xa3f594
// 009d41e3  b914e9c100           mov ecx, 0xc1e914
// 009d41e8  e8c379ccff           call 0x69bbb0
// 009d41ed  68c0599e00           push 0x9e59c0
// 009d41f2  e86c48ddff           call 0x7a8a63
// 009d41f7  59                   pop ecx
// 009d41f8  c3                   ret 

extern int g_009d41d0_0;
extern int g_009d41d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d41d0(void*);
struct O_009d41d0 { int m(void*, void*, int, int, int); };
extern O_009d41d0 g_obj_009d41d0;
extern int g_tail_009d41d0;
void func_009d41d0()
{
    g_obj_009d41d0.m((void*)&g_009d41d0_0, (void*)&g_009d41d0_1, 180, 15, 0);
    tail_fn_009d41d0(&g_tail_009d41d0);
}