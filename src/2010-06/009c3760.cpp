// from server: 100% by colin
// roc 2010-06 009c3760  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c3760
//
// 009c3760  6a00                 push 0
// 009c3762  6a0f                 push 0xf
// 009c3764  68b8000000           push 0xb8
// 009c3769  68e4ada000           push 0xa0ade4
// 009c376e  6820aea000           push 0xa0ae20
// 009c3773  b92c0bc000           mov ecx, 0xc00b2c
// 009c3778  e8530ca8ff           call 0x4443d0
// 009c377d  6860b39d00           push 0x9db360
// 009c3782  e8dc52deff           call 0x7a8a63
// 009c3787  59                   pop ecx
// 009c3788  c3                   ret 

extern int g_009c3760_0;
extern int g_009c3760_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c3760(void*);
struct O_009c3760 { int m(void*, void*, int, int, int); };
extern O_009c3760 g_obj_009c3760;
extern int g_tail_009c3760;
void func_009c3760()
{
    g_obj_009c3760.m((void*)&g_009c3760_0, (void*)&g_009c3760_1, 184, 15, 0);
    tail_fn_009c3760(&g_tail_009c3760);
}