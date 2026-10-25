// from server: 100% by colin
// roc 2011-06 00a195d0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a195d0
//
// 00a195d0  6a00                 push 0
// 00a195d2  6a1f                 push 0x1f
// 00a195d4  6897000000           push 0x97
// 00a195d9  6878a4a700           push 0xa7a478
// 00a195de  68a8a4a700           push 0xa7a4a8
// 00a195e3  b9987dcb00           mov ecx, 0xcb7d98
// 00a195e8  e8f39facff           call 0x4e35e0
// 00a195ed  682036a300           push 0xa33620
// 00a195f2  e8661bdfff           call 0x80b15d
// 00a195f7  59                   pop ecx
// 00a195f8  c3                   ret 

extern int g_00a195d0_0;
extern int g_00a195d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a195d0(void*);
struct O_00a195d0 { int m(void*, void*, int, int, int); };
extern O_00a195d0 g_obj_00a195d0;
extern int g_tail_00a195d0;
void func_00a195d0()
{
    g_obj_00a195d0.m((void*)&g_00a195d0_0, (void*)&g_00a195d0_1, 151, 31, 0);
    tail_fn_00a195d0(&g_tail_00a195d0);
}