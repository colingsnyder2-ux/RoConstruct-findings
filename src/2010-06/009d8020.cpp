// from server: 100% by colin
// roc 2010-06 009d8020  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d8020
//
// 009d8020  6a01                 push 1
// 009d8022  6a00                 push 0
// 009d8024  6884e0a200           push 0xa2e084
// 009d8029  6858aaa300           push 0xa3aa58
// 009d802e  68e4000000           push 0xe4
// 009d8033  b9d41bc200           mov ecx, 0xc21bd4
// 009d8038  e873b2d1ff           call 0x6f32b0
// 009d803d  68b0809e00           push 0x9e80b0
// 009d8042  e81c0addff           call 0x7a8a63
// 009d8047  59                   pop ecx
// 009d8048  c3                   ret 

extern int g_009d8020_1;
extern int g_009d8020_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d8020(void*);
struct O_009d8020 { int m(int, void*, void*, int, int); };
extern O_009d8020 g_obj_009d8020;
extern int g_tail_009d8020;
void func_009d8020()
{
    g_obj_009d8020.m(228, (void*)&g_009d8020_1, (void*)&g_009d8020_2, 0, 1);
    tail_fn_009d8020(&g_tail_009d8020);
}