// from server: 100% by colin
// roc 2011-06 00a2b980  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b980
//
// 00a2b980  6a00                 push 0
// 00a2b982  6a1f                 push 0x1f
// 00a2b984  6858010000           push 0x158
// 00a2b989  6880d2aa00           push 0xaad280
// 00a2b98e  6820d3aa00           push 0xaad320
// 00a2b993  b9b82bcd00           mov ecx, 0xcd2bb8
// 00a2b998  e86370cdff           call 0x702a00
// 00a2b99d  68c0dca300           push 0xa3dcc0
// 00a2b9a2  e8b6f7ddff           call 0x80b15d
// 00a2b9a7  59                   pop ecx
// 00a2b9a8  c3                   ret 

extern int g_00a2b980_0;
extern int g_00a2b980_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b980(void*);
struct O_00a2b980 { int m(void*, void*, int, int, int); };
extern O_00a2b980 g_obj_00a2b980;
extern int g_tail_00a2b980;
void func_00a2b980()
{
    g_obj_00a2b980.m((void*)&g_00a2b980_0, (void*)&g_00a2b980_1, 344, 31, 0);
    tail_fn_00a2b980(&g_tail_00a2b980);
}