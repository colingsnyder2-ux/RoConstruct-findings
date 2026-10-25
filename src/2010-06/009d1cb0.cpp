// from server: 100% by colin
// roc 2010-06 009d1cb0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d1cb0
//
// 009d1cb0  6a00                 push 0
// 009d1cb2  6a02                 push 2
// 009d1cb4  6874020000           push 0x274
// 009d1cb9  6840ffa200           push 0xa2ff40
// 009d1cbe  6890aaa300           push 0xa3aa90
// 009d1cc3  b960c7c100           mov ecx, 0xc1c760
// 009d1cc8  e82308c9ff           call 0x6624f0
// 009d1ccd  6860429e00           push 0x9e4260
// 009d1cd2  e88c6dddff           call 0x7a8a63
// 009d1cd7  59                   pop ecx
// 009d1cd8  c3                   ret 

extern int g_009d1cb0_0;
extern int g_009d1cb0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d1cb0(void*);
struct O_009d1cb0 { int m(void*, void*, int, int, int); };
extern O_009d1cb0 g_obj_009d1cb0;
extern int g_tail_009d1cb0;
void func_009d1cb0()
{
    g_obj_009d1cb0.m((void*)&g_009d1cb0_0, (void*)&g_009d1cb0_1, 628, 2, 0);
    tail_fn_009d1cb0(&g_tail_009d1cb0);
}