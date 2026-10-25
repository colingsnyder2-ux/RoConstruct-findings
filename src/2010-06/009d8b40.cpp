// from server: 100% by colin
// roc 2010-06 009d8b40  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d8b40
//
// 009d8b40  6a00                 push 0
// 009d8b42  6a02                 push 2
// 009d8b44  681c020000           push 0x21c
// 009d8b49  6840ffa200           push 0xa2ff40
// 009d8b4e  68a850a400           push 0xa450a8
// 009d8b53  b9d01ec200           mov ecx, 0xc21ed0
// 009d8b58  e84303d2ff           call 0x6f8ea0
// 009d8b5d  6860839e00           push 0x9e8360
// 009d8b62  e8fcfedcff           call 0x7a8a63
// 009d8b67  59                   pop ecx
// 009d8b68  c3                   ret 

extern int g_009d8b40_0;
extern int g_009d8b40_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d8b40(void*);
struct O_009d8b40 { int m(void*, void*, int, int, int); };
extern O_009d8b40 g_obj_009d8b40;
extern int g_tail_009d8b40;
void func_009d8b40()
{
    g_obj_009d8b40.m((void*)&g_009d8b40_0, (void*)&g_009d8b40_1, 540, 2, 0);
    tail_fn_009d8b40(&g_tail_009d8b40);
}