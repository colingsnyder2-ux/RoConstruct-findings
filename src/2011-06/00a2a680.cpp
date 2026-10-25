// from server: 100% by colin
// roc 2011-06 00a2a680  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2a680
//
// 00a2a680  6a00                 push 0
// 00a2a682  6a1f                 push 0x1f
// 00a2a684  689c000000           push 0x9c
// 00a2a689  68e483a700           push 0xa783e4
// 00a2a68e  6898d8a900           push 0xa9d898
// 00a2a693  b9ac1dcd00           mov ecx, 0xcd1dac
// 00a2a698  e8f35eccff           call 0x6f0590
// 00a2a69d  6800d4a300           push 0xa3d400
// 00a2a6a2  e8b60adeff           call 0x80b15d
// 00a2a6a7  59                   pop ecx
// 00a2a6a8  c3                   ret 

extern int g_00a2a680_0;
extern int g_00a2a680_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2a680(void*);
struct O_00a2a680 { int m(void*, void*, int, int, int); };
extern O_00a2a680 g_obj_00a2a680;
extern int g_tail_00a2a680;
void func_00a2a680()
{
    g_obj_00a2a680.m((void*)&g_00a2a680_0, (void*)&g_00a2a680_1, 156, 31, 0);
    tail_fn_00a2a680(&g_tail_00a2a680);
}