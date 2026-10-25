// from server: 100% by colin
// roc 2010-06 009d8b10  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d8b10
//
// 009d8b10  6a00                 push 0
// 009d8b12  6a02                 push 2
// 009d8b14  68f4010000           push 0x1f4
// 009d8b19  6840ffa200           push 0xa2ff40
// 009d8b1e  6814b3a400           push 0xa4b314
// 009d8b23  b9b021c200           mov ecx, 0xc221b0
// 009d8b28  e87303d2ff           call 0x6f8ea0
// 009d8b2d  6840839e00           push 0x9e8340
// 009d8b32  e82cffdcff           call 0x7a8a63
// 009d8b37  59                   pop ecx
// 009d8b38  c3                   ret 

extern int g_009d8b10_0;
extern int g_009d8b10_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d8b10(void*);
struct O_009d8b10 { int m(void*, void*, int, int, int); };
extern O_009d8b10 g_obj_009d8b10;
extern int g_tail_009d8b10;
void func_009d8b10()
{
    g_obj_009d8b10.m((void*)&g_009d8b10_0, (void*)&g_009d8b10_1, 500, 2, 0);
    tail_fn_009d8b10(&g_tail_009d8b10);
}