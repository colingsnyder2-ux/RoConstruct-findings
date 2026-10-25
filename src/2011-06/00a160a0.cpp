// from server: 100% by colin
// roc 2011-06 00a160a0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a160a0
//
// 00a160a0  6a00                 push 0
// 00a160a2  6a1f                 push 0x1f
// 00a160a4  6891000000           push 0x91
// 00a160a9  68fcc8a600           push 0xa6c8fc
// 00a160ae  6808c9a600           push 0xa6c908
// 00a160b3  b9a829cb00           mov ecx, 0xcb29a8
// 00a160b8  e8f3aba3ff           call 0x450cb0
// 00a160bd  68c00fa300           push 0xa30fc0
// 00a160c2  e89650dfff           call 0x80b15d
// 00a160c7  59                   pop ecx
// 00a160c8  c3                   ret 

extern int g_00a160a0_0;
extern int g_00a160a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a160a0(void*);
struct O_00a160a0 { int m(void*, void*, int, int, int); };
extern O_00a160a0 g_obj_00a160a0;
extern int g_tail_00a160a0;
void func_00a160a0()
{
    g_obj_00a160a0.m((void*)&g_00a160a0_0, (void*)&g_00a160a0_1, 145, 31, 0);
    tail_fn_00a160a0(&g_tail_00a160a0);
}