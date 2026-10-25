// from server: 100% by colin
// roc 2011-06 00a2bc80  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bc80
//
// 00a2bc80  6a00                 push 0
// 00a2bc82  6a1f                 push 0x1f
// 00a2bc84  6850010000           push 0x150
// 00a2bc89  6880d2aa00           push 0xaad280
// 00a2bc8e  6870d3aa00           push 0xaad370
// 00a2bc93  b9f82acd00           mov ecx, 0xcd2af8
// 00a2bc98  e8e373cdff           call 0x703080
// 00a2bc9d  6820dea300           push 0xa3de20
// 00a2bca2  e8b6f4ddff           call 0x80b15d
// 00a2bca7  59                   pop ecx
// 00a2bca8  c3                   ret 

extern int g_00a2bc80_0;
extern int g_00a2bc80_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bc80(void*);
struct O_00a2bc80 { int m(void*, void*, int, int, int); };
extern O_00a2bc80 g_obj_00a2bc80;
extern int g_tail_00a2bc80;
void func_00a2bc80()
{
    g_obj_00a2bc80.m((void*)&g_00a2bc80_0, (void*)&g_00a2bc80_1, 336, 31, 0);
    tail_fn_00a2bc80(&g_tail_00a2bc80);
}