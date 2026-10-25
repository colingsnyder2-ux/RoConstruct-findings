// from server: 100% by colin
// roc 2011-06 00a1c1b0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1c1b0
//
// 00a1c1b0  6a00                 push 0
// 00a1c1b2  6a10                 push 0x10
// 00a1c1b4  68a3000000           push 0xa3
// 00a1c1b9  68fc9ba800           push 0xa89bfc
// 00a1c1be  68ec9ba800           push 0xa89bec
// 00a1c1c3  b940b2cb00           mov ecx, 0xcbb240
// 00a1c1c8  e81335b7ff           call 0x58f6e0
// 00a1c1cd  68304aa300           push 0xa34a30
// 00a1c1d2  e886efdeff           call 0x80b15d
// 00a1c1d7  59                   pop ecx
// 00a1c1d8  c3                   ret 

extern int g_00a1c1b0_0;
extern int g_00a1c1b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1c1b0(void*);
struct O_00a1c1b0 { int m(void*, void*, int, int, int); };
extern O_00a1c1b0 g_obj_00a1c1b0;
extern int g_tail_00a1c1b0;
void func_00a1c1b0()
{
    g_obj_00a1c1b0.m((void*)&g_00a1c1b0_0, (void*)&g_00a1c1b0_1, 163, 16, 0);
    tail_fn_00a1c1b0(&g_tail_00a1c1b0);
}