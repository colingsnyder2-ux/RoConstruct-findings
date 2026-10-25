// from server: 100% by colin
// roc 2011-06 00a17f40  unit: seg_00a10000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17f40
//
// 00a17f40  6a00                 push 0
// 00a17f42  68f486a700           push 0xa786f4
// 00a17f47  680087a700           push 0xa78700
// 00a17f4c  6850010000           push 0x150
// 00a17f51  b9d862cb00           mov ecx, 0xcb62d8
// 00a17f56  e8e511aaff           call 0x4b9140
// 00a17f5b  686025a300           push 0xa32560
// 00a17f60  e8f831dfff           call 0x80b15d
// 00a17f65  59                   pop ecx
// 00a17f66  c3                   ret 

extern int g_00a17f40_1;
extern int g_00a17f40_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a17f40(void*);
struct O_00a17f40 { int m(int, void*, void*, int); };
extern O_00a17f40 g_obj_00a17f40;
extern int g_tail_00a17f40;
void func_00a17f40()
{
    g_obj_00a17f40.m(336, (void*)&g_00a17f40_1, (void*)&g_00a17f40_2, 0);
    tail_fn_00a17f40(&g_tail_00a17f40);
}