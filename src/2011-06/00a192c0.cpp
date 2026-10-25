// from server: 100% by colin
// roc 2011-06 00a192c0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a192c0
//
// 00a192c0  6a00                 push 0
// 00a192c2  6a1f                 push 0x1f
// 00a192c4  68c4000000           push 0xc4
// 00a192c9  6818a2a700           push 0xa7a218
// 00a192ce  6858a3a700           push 0xa7a358
// 00a192d3  b9ec7ccb00           mov ecx, 0xcb7cec
// 00a192d8  e8b3a0acff           call 0x4e3390
// 00a192dd  686037a300           push 0xa33760
// 00a192e2  e8761edfff           call 0x80b15d
// 00a192e7  59                   pop ecx
// 00a192e8  c3                   ret 

extern int g_00a192c0_0;
extern int g_00a192c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a192c0(void*);
struct O_00a192c0 { int m(void*, void*, int, int, int); };
extern O_00a192c0 g_obj_00a192c0;
extern int g_tail_00a192c0;
void func_00a192c0()
{
    g_obj_00a192c0.m((void*)&g_00a192c0_0, (void*)&g_00a192c0_1, 196, 31, 0);
    tail_fn_00a192c0(&g_tail_00a192c0);
}