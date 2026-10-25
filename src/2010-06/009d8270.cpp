// from server: 100% by colin
// roc 2010-06 009d8270  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d8270
//
// 009d8270  6a01                 push 1
// 009d8272  6a00                 push 0
// 009d8274  68f4fea200           push 0xa2fef4
// 009d8279  681804a300           push 0xa30418
// 009d827e  6894000000           push 0x94
// 009d8283  b9bc1cc200           mov ecx, 0xc21cbc
// 009d8288  e823b8d1ff           call 0x6f3ab0
// 009d828d  68f0819e00           push 0x9e81f0
// 009d8292  e8cc07ddff           call 0x7a8a63
// 009d8297  59                   pop ecx
// 009d8298  c3                   ret 

extern int g_009d8270_1;
extern int g_009d8270_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d8270(void*);
struct O_009d8270 { int m(int, void*, void*, int, int); };
extern O_009d8270 g_obj_009d8270;
extern int g_tail_009d8270;
void func_009d8270()
{
    g_obj_009d8270.m(148, (void*)&g_009d8270_1, (void*)&g_009d8270_2, 0, 1);
    tail_fn_009d8270(&g_tail_009d8270);
}