// from server: 100% by colin
// roc 2010-06 009d1d40  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d1d40
//
// 009d1d40  6a00                 push 0
// 009d1d42  6a02                 push 2
// 009d1d44  68ec020000           push 0x2ec
// 009d1d49  6840ffa200           push 0xa2ff40
// 009d1d4e  68e4aaa300           push 0xa3aae4
// 009d1d53  b9c0c6c100           mov ecx, 0xc1c6c0
// 009d1d58  e89307c9ff           call 0x6624f0
// 009d1d5d  68c0429e00           push 0x9e42c0
// 009d1d62  e8fc6cddff           call 0x7a8a63
// 009d1d67  59                   pop ecx
// 009d1d68  c3                   ret 

extern int g_009d1d40_0;
extern int g_009d1d40_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d1d40(void*);
struct O_009d1d40 { int m(void*, void*, int, int, int); };
extern O_009d1d40 g_obj_009d1d40;
extern int g_tail_009d1d40;
void func_009d1d40()
{
    g_obj_009d1d40.m((void*)&g_009d1d40_0, (void*)&g_009d1d40_1, 748, 2, 0);
    tail_fn_009d1d40(&g_tail_009d1d40);
}