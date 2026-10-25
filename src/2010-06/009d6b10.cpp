// from server: 100% by colin
// roc 2010-06 009d6b10  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d6b10
//
// 009d6b10  6a00                 push 0
// 009d6b12  6a0f                 push 0xf
// 009d6b14  6898000000           push 0x98
// 009d6b19  685c8ea100           push 0xa18e5c
// 009d6b1e  680804a300           push 0xa30408
// 009d6b23  b9540ac200           mov ecx, 0xc20a54
// 009d6b28  e82322d0ff           call 0x6d8d50
// 009d6b2d  6890759e00           push 0x9e7590
// 009d6b32  e82c1fddff           call 0x7a8a63
// 009d6b37  59                   pop ecx
// 009d6b38  c3                   ret 

extern int g_009d6b10_0;
extern int g_009d6b10_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d6b10(void*);
struct O_009d6b10 { int m(void*, void*, int, int, int); };
extern O_009d6b10 g_obj_009d6b10;
extern int g_tail_009d6b10;
void func_009d6b10()
{
    g_obj_009d6b10.m((void*)&g_009d6b10_0, (void*)&g_009d6b10_1, 152, 15, 0);
    tail_fn_009d6b10(&g_tail_009d6b10);
}