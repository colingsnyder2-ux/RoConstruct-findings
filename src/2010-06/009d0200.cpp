// from server: 100% by colin
// roc 2010-06 009d0200  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d0200
//
// 009d0200  6a00                 push 0
// 009d0202  6a0f                 push 0xf
// 009d0204  68ac000000           push 0xac
// 009d0209  683c60a300           push 0xa3603c
// 009d020e  689060a300           push 0xa36090
// 009d0213  b9d0aec100           mov ecx, 0xc1aed0
// 009d0218  e8d322c6ff           call 0x6324f0
// 009d021d  6870369e00           push 0x9e3670
// 009d0222  e83c88ddff           call 0x7a8a63
// 009d0227  59                   pop ecx
// 009d0228  c3                   ret 

extern int g_009d0200_0;
extern int g_009d0200_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d0200(void*);
struct O_009d0200 { int m(void*, void*, int, int, int); };
extern O_009d0200 g_obj_009d0200;
extern int g_tail_009d0200;
void func_009d0200()
{
    g_obj_009d0200.m((void*)&g_009d0200_0, (void*)&g_009d0200_1, 172, 15, 0);
    tail_fn_009d0200(&g_tail_009d0200);
}