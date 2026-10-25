// from server: 100% by colin
// roc 2011-06 00a2c2d0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c2d0
//
// 00a2c2d0  6a00                 push 0
// 00a2c2d2  6a1f                 push 0x1f
// 00a2c2d4  6890000000           push 0x90
// 00a2c2d9  68fc6ba900           push 0xa96bfc
// 00a2c2de  6890e4aa00           push 0xaae490
// 00a2c2e3  b9bc33cd00           mov ecx, 0xcd33bc
// 00a2c2e8  e89307ceff           call 0x70ca80
// 00a2c2ed  6850e3a300           push 0xa3e350
// 00a2c2f2  e866eeddff           call 0x80b15d
// 00a2c2f7  59                   pop ecx
// 00a2c2f8  c3                   ret 

extern int g_00a2c2d0_0;
extern int g_00a2c2d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c2d0(void*);
struct O_00a2c2d0 { int m(void*, void*, int, int, int); };
extern O_00a2c2d0 g_obj_00a2c2d0;
extern int g_tail_00a2c2d0;
void func_00a2c2d0()
{
    g_obj_00a2c2d0.m((void*)&g_00a2c2d0_0, (void*)&g_00a2c2d0_1, 144, 31, 0);
    tail_fn_00a2c2d0(&g_tail_00a2c2d0);
}