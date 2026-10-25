// from server: 100% by colin
// roc 2011-06 00a160d0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a160d0
//
// 00a160d0  6a00                 push 0
// 00a160d2  6a1f                 push 0x1f
// 00a160d4  6892000000           push 0x92
// 00a160d9  68fcc8a600           push 0xa6c8fc
// 00a160de  6814c9a600           push 0xa6c914
// 00a160e3  b9c829cb00           mov ecx, 0xcb29c8
// 00a160e8  e8c3aba3ff           call 0x450cb0
// 00a160ed  68a00fa300           push 0xa30fa0
// 00a160f2  e86650dfff           call 0x80b15d
// 00a160f7  59                   pop ecx
// 00a160f8  c3                   ret 

extern int g_00a160d0_0;
extern int g_00a160d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a160d0(void*);
struct O_00a160d0 { int m(void*, void*, int, int, int); };
extern O_00a160d0 g_obj_00a160d0;
extern int g_tail_00a160d0;
void func_00a160d0()
{
    g_obj_00a160d0.m((void*)&g_00a160d0_0, (void*)&g_00a160d0_1, 146, 31, 0);
    tail_fn_00a160d0(&g_tail_00a160d0);
}