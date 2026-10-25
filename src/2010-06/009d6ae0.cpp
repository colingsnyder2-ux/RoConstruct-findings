// from server: 100% by colin
// roc 2010-06 009d6ae0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d6ae0
//
// 009d6ae0  6a01                 push 1
// 009d6ae2  6a00                 push 0
// 009d6ae4  68b053a400           push 0xa453b0
// 009d6ae9  686062a400           push 0xa46260
// 009d6aee  6800010000           push 0x100
// 009d6af3  b90c0ac200           mov ecx, 0xc20a0c
// 009d6af8  e89317d0ff           call 0x6d8290
// 009d6afd  6870749e00           push 0x9e7470
// 009d6b02  e85c1fddff           call 0x7a8a63
// 009d6b07  59                   pop ecx
// 009d6b08  c3                   ret 

extern int g_009d6ae0_1;
extern int g_009d6ae0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d6ae0(void*);
struct O_009d6ae0 { int m(int, void*, void*, int, int); };
extern O_009d6ae0 g_obj_009d6ae0;
extern int g_tail_009d6ae0;
void func_009d6ae0()
{
    g_obj_009d6ae0.m(256, (void*)&g_009d6ae0_1, (void*)&g_009d6ae0_2, 0, 1);
    tail_fn_009d6ae0(&g_tail_009d6ae0);
}