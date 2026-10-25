// from server: 100% by colin
// roc 2011-06 00a1c2a0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1c2a0
//
// 00a1c2a0  6a00                 push 0
// 00a1c2a2  6a1f                 push 0x1f
// 00a1c2a4  68a2000000           push 0xa2
// 00a1c2a9  68fc9ba800           push 0xa89bfc
// 00a1c2ae  684c9ca800           push 0xa89c4c
// 00a1c2b3  b9bcb2cb00           mov ecx, 0xcbb2bc
// 00a1c2b8  e82334b7ff           call 0x58f6e0
// 00a1c2bd  68504aa300           push 0xa34a50
// 00a1c2c2  e896eedeff           call 0x80b15d
// 00a1c2c7  59                   pop ecx
// 00a1c2c8  c3                   ret 

extern int g_00a1c2a0_0;
extern int g_00a1c2a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1c2a0(void*);
struct O_00a1c2a0 { int m(void*, void*, int, int, int); };
extern O_00a1c2a0 g_obj_00a1c2a0;
extern int g_tail_00a1c2a0;
void func_00a1c2a0()
{
    g_obj_00a1c2a0.m((void*)&g_00a1c2a0_0, (void*)&g_00a1c2a0_1, 162, 31, 0);
    tail_fn_00a1c2a0(&g_tail_00a1c2a0);
}