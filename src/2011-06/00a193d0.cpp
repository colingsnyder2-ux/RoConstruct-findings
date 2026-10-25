// from server: 100% by colin
// roc 2011-06 00a193d0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a193d0
//
// 00a193d0  6a00                 push 0
// 00a193d2  6a1f                 push 0x1f
// 00a193d4  68d1000000           push 0xd1
// 00a193d9  6818a2a700           push 0xa7a218
// 00a193de  68c4a3a700           push 0xa7a3c4
// 00a193e3  b9387bcb00           mov ecx, 0xcb7b38
// 00a193e8  e8f3a1acff           call 0x4e35e0
// 00a193ed  688037a300           push 0xa33780
// 00a193f2  e8661ddfff           call 0x80b15d
// 00a193f7  59                   pop ecx
// 00a193f8  c3                   ret 

extern int g_00a193d0_0;
extern int g_00a193d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a193d0(void*);
struct O_00a193d0 { int m(void*, void*, int, int, int); };
extern O_00a193d0 g_obj_00a193d0;
extern int g_tail_00a193d0;
void func_00a193d0()
{
    g_obj_00a193d0.m((void*)&g_00a193d0_0, (void*)&g_00a193d0_1, 209, 31, 0);
    tail_fn_00a193d0(&g_tail_00a193d0);
}