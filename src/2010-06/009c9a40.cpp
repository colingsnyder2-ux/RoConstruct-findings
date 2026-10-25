// from server: 100% by colin
// roc 2010-06 009c9a40  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c9a40
//
// 009c9a40  6a01                 push 1
// 009c9a42  6a00                 push 0
// 009c9a44  68cca2a200           push 0xa2a2cc
// 009c9a49  68dca1a200           push 0xa2a1dc
// 009c9a4e  68e0000000           push 0xe0
// 009c9a53  b928bac000           mov ecx, 0xc0ba28
// 009c9a58  e8e34abdff           call 0x59e540
// 009c9a5d  68d0ee9d00           push 0x9deed0
// 009c9a62  e8fcefddff           call 0x7a8a63
// 009c9a67  59                   pop ecx
// 009c9a68  c3                   ret 

extern int g_009c9a40_1;
extern int g_009c9a40_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c9a40(void*);
struct O_009c9a40 { int m(int, void*, void*, int, int); };
extern O_009c9a40 g_obj_009c9a40;
extern int g_tail_009c9a40;
void func_009c9a40()
{
    g_obj_009c9a40.m(224, (void*)&g_009c9a40_1, (void*)&g_009c9a40_2, 0, 1);
    tail_fn_009c9a40(&g_tail_009c9a40);
}