// from server: 100% by colin
// roc 2010-06 009c2dc0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c2dc0
//
// 009c2dc0  6a00                 push 0
// 009c2dc2  6a0f                 push 0xf
// 009c2dc4  6899000000           push 0x99
// 009c2dc9  683814a000           push 0xa01438
// 009c2dce  682014a000           push 0xa01420
// 009c2dd3  b9fc05c000           mov ecx, 0xc005fc
// 009c2dd8  e8137aa4ff           call 0x40a7f0
// 009c2ddd  68a0aa9d00           push 0x9daaa0
// 009c2de2  e87c5cdeff           call 0x7a8a63
// 009c2de7  59                   pop ecx
// 009c2de8  c3                   ret 

extern int g_009c2dc0_0;
extern int g_009c2dc0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c2dc0(void*);
struct O_009c2dc0 { int m(void*, void*, int, int, int); };
extern O_009c2dc0 g_obj_009c2dc0;
extern int g_tail_009c2dc0;
void func_009c2dc0()
{
    g_obj_009c2dc0.m((void*)&g_009c2dc0_0, (void*)&g_009c2dc0_1, 153, 15, 0);
    tail_fn_009c2dc0(&g_tail_009c2dc0);
}