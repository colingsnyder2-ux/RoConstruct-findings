// from server: 100% by colin
// roc 2010-06 009d5090  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5090
//
// 009d5090  6a00                 push 0
// 009d5092  6a0f                 push 0xf
// 009d5094  6898000000           push 0x98
// 009d5099  685c8ea100           push 0xa18e5c
// 009d509e  68f016a400           push 0xa416f0
// 009d50a3  b95cf0c100           mov ecx, 0xc1f05c
// 009d50a8  e8738ccdff           call 0x6add20
// 009d50ad  68305f9e00           push 0x9e5f30
// 009d50b2  e8ac39ddff           call 0x7a8a63
// 009d50b7  59                   pop ecx
// 009d50b8  c3                   ret 

extern int g_009d5090_0;
extern int g_009d5090_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5090(void*);
struct O_009d5090 { int m(void*, void*, int, int, int); };
extern O_009d5090 g_obj_009d5090;
extern int g_tail_009d5090;
void func_009d5090()
{
    g_obj_009d5090.m((void*)&g_009d5090_0, (void*)&g_009d5090_1, 152, 15, 0);
    tail_fn_009d5090(&g_tail_009d5090);
}