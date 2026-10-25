// from server: 100% by colin
// roc 2011-06 00a1c9b0  unit: seg_00a10000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1c9b0
//
// 00a1c9b0  6a00                 push 0
// 00a1c9b2  68d0a4a800           push 0xa8a4d0
// 00a1c9b7  6860a3a800           push 0xa8a360
// 00a1c9bc  68d8000000           push 0xd8
// 00a1c9c1  b914c1cb00           mov ecx, 0xcbc114
// 00a1c9c6  e8f5dbb7ff           call 0x59a5c0
// 00a1c9cb  683051a300           push 0xa35130
// 00a1c9d0  e888e7deff           call 0x80b15d
// 00a1c9d5  59                   pop ecx
// 00a1c9d6  c3                   ret 

extern int g_00a1c9b0_1;
extern int g_00a1c9b0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1c9b0(void*);
struct O_00a1c9b0 { int m(int, void*, void*, int); };
extern O_00a1c9b0 g_obj_00a1c9b0;
extern int g_tail_00a1c9b0;
void func_00a1c9b0()
{
    g_obj_00a1c9b0.m(216, (void*)&g_00a1c9b0_1, (void*)&g_00a1c9b0_2, 0);
    tail_fn_00a1c9b0(&g_tail_00a1c9b0);
}