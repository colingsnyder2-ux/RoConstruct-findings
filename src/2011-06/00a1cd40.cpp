// from server: 100% by colin
// roc 2011-06 00a1cd40  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1cd40
//
// 00a1cd40  6a00                 push 0
// 00a1cd42  6a1f                 push 0x1f
// 00a1cd44  68c8000000           push 0xc8
// 00a1cd49  6884a0a800           push 0xa8a084
// 00a1cd4e  68d8d1a800           push 0xa8d1d8
// 00a1cd53  b960cecb00           mov ecx, 0xcbce60
// 00a1cd58  e8e354b8ff           call 0x5a2240
// 00a1cd5d  685052a300           push 0xa35250
// 00a1cd62  e8f6e3deff           call 0x80b15d
// 00a1cd67  59                   pop ecx
// 00a1cd68  c3                   ret 

extern int g_00a1cd40_0;
extern int g_00a1cd40_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1cd40(void*);
struct O_00a1cd40 { int m(void*, void*, int, int, int); };
extern O_00a1cd40 g_obj_00a1cd40;
extern int g_tail_00a1cd40;
void func_00a1cd40()
{
    g_obj_00a1cd40.m((void*)&g_00a1cd40_0, (void*)&g_00a1cd40_1, 200, 31, 0);
    tail_fn_00a1cd40(&g_tail_00a1cd40);
}