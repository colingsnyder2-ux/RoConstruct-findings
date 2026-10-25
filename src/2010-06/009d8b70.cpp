// from server: 100% by colin
// roc 2010-06 009d8b70  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d8b70
//
// 009d8b70  6a00                 push 0
// 009d8b72  6a02                 push 2
// 009d8b74  6844020000           push 0x244
// 009d8b79  6840ffa200           push 0xa2ff40
// 009d8b7e  68c850a400           push 0xa450c8
// 009d8b83  b97020c200           mov ecx, 0xc22070
// 009d8b88  e81303d2ff           call 0x6f8ea0
// 009d8b8d  6880839e00           push 0x9e8380
// 009d8b92  e8ccfedcff           call 0x7a8a63
// 009d8b97  59                   pop ecx
// 009d8b98  c3                   ret 

extern int g_009d8b70_0;
extern int g_009d8b70_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d8b70(void*);
struct O_009d8b70 { int m(void*, void*, int, int, int); };
extern O_009d8b70 g_obj_009d8b70;
extern int g_tail_009d8b70;
void func_009d8b70()
{
    g_obj_009d8b70.m((void*)&g_009d8b70_0, (void*)&g_009d8b70_1, 580, 2, 0);
    tail_fn_009d8b70(&g_tail_009d8b70);
}