// from server: 100% by colin
// roc 2010-06 009d4300  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4300
//
// 009d4300  6a00                 push 0
// 009d4302  6a0f                 push 0xf
// 009d4304  6854010000           push 0x154
// 009d4309  68d403a300           push 0xa303d4
// 009d430e  68dcf5a300           push 0xa3f5dc
// 009d4313  b9f4e8c100           mov ecx, 0xc1e8f4
// 009d4318  e8137accff           call 0x69bd30
// 009d431d  68005a9e00           push 0x9e5a00
// 009d4322  e83c47ddff           call 0x7a8a63
// 009d4327  59                   pop ecx
// 009d4328  c3                   ret 

extern int g_009d4300_0;
extern int g_009d4300_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4300(void*);
struct O_009d4300 { int m(void*, void*, int, int, int); };
extern O_009d4300 g_obj_009d4300;
extern int g_tail_009d4300;
void func_009d4300()
{
    g_obj_009d4300.m((void*)&g_009d4300_0, (void*)&g_009d4300_1, 340, 15, 0);
    tail_fn_009d4300(&g_tail_009d4300);
}