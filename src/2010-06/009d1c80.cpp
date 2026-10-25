// from server: 100% by colin
// roc 2010-06 009d1c80  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d1c80
//
// 009d1c80  6a00                 push 0
// 009d1c82  6a02                 push 2
// 009d1c84  684c020000           push 0x24c
// 009d1c89  6840ffa200           push 0xa2ff40
// 009d1c8e  687caaa300           push 0xa3aa7c
// 009d1c93  b9a4c8c100           mov ecx, 0xc1c8a4
// 009d1c98  e85308c9ff           call 0x6624f0
// 009d1c9d  6840429e00           push 0x9e4240
// 009d1ca2  e8bc6dddff           call 0x7a8a63
// 009d1ca7  59                   pop ecx
// 009d1ca8  c3                   ret 

extern int g_009d1c80_0;
extern int g_009d1c80_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d1c80(void*);
struct O_009d1c80 { int m(void*, void*, int, int, int); };
extern O_009d1c80 g_obj_009d1c80;
extern int g_tail_009d1c80;
void func_009d1c80()
{
    g_obj_009d1c80.m((void*)&g_009d1c80_0, (void*)&g_009d1c80_1, 588, 2, 0);
    tail_fn_009d1c80(&g_tail_009d1c80);
}