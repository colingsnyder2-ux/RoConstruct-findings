// from server: 100% by colin
// roc 2011-06 00a25030  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a25030
//
// 00a25030  6a00                 push 0
// 00a25032  687cc7a900           push 0xa9c77c
// 00a25037  68a8c7a900           push 0xa9c7a8
// 00a2503c  68c0000000           push 0xc0
// 00a25041  b918decc00           mov ecx, 0xccde18
// 00a25046  e8f539c4ff           call 0x668a40
// 00a2504b  6860afa300           push 0xa3af60
// 00a25050  e80861deff           call 0x80b15d
// 00a25055  59                   pop ecx
// 00a25056  c3                   ret 

extern int g_00a25030_1;
extern int g_00a25030_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a25030(void*);
struct O_00a25030 { int m(int, void*, void*, int); };
extern O_00a25030 g_obj_00a25030;
extern int g_tail_00a25030;
void func_00a25030()
{
    g_obj_00a25030.m(192, (void*)&g_00a25030_1, (void*)&g_00a25030_2, 0);
    tail_fn_00a25030(&g_tail_00a25030);
}