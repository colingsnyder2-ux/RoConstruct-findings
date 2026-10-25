// from server: 100% by colin
// roc 2011-06 00a2b950  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b950
//
// 00a2b950  6a00                 push 0
// 00a2b952  6a1f                 push 0x1f
// 00a2b954  6854010000           push 0x154
// 00a2b959  6880d2aa00           push 0xaad280
// 00a2b95e  68c0b7a500           push 0xa5b7c0
// 00a2b963  b9f82bcd00           mov ecx, 0xcd2bf8
// 00a2b968  e8c36fcdff           call 0x702930
// 00a2b96d  6880dca300           push 0xa3dc80
// 00a2b972  e8e6f7ddff           call 0x80b15d
// 00a2b977  59                   pop ecx
// 00a2b978  c3                   ret 

extern int g_00a2b950_0;
extern int g_00a2b950_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b950(void*);
struct O_00a2b950 { int m(void*, void*, int, int, int); };
extern O_00a2b950 g_obj_00a2b950;
extern int g_tail_00a2b950;
void func_00a2b950()
{
    g_obj_00a2b950.m((void*)&g_00a2b950_0, (void*)&g_00a2b950_1, 340, 31, 0);
    tail_fn_00a2b950(&g_tail_00a2b950);
}