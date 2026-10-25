// from server: 100% by colin
// roc 2011-06 00a2bb00  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bb00
//
// 00a2bb00  6a00                 push 0
// 00a2bb02  6a1f                 push 0x1f
// 00a2bb04  6850010000           push 0x150
// 00a2bb09  6880d2aa00           push 0xaad280
// 00a2bb0e  681cd3aa00           push 0xaad31c
// 00a2bb13  b9d82bcd00           mov ecx, 0xcd2bd8
// 00a2bb18  e82372cdff           call 0x702d40
// 00a2bb1d  68a0dda300           push 0xa3dda0
// 00a2bb22  e836f6ddff           call 0x80b15d
// 00a2bb27  59                   pop ecx
// 00a2bb28  c3                   ret 

extern int g_00a2bb00_0;
extern int g_00a2bb00_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bb00(void*);
struct O_00a2bb00 { int m(void*, void*, int, int, int); };
extern O_00a2bb00 g_obj_00a2bb00;
extern int g_tail_00a2bb00;
void func_00a2bb00()
{
    g_obj_00a2bb00.m((void*)&g_00a2bb00_0, (void*)&g_00a2bb00_1, 336, 31, 0);
    tail_fn_00a2bb00(&g_tail_00a2bb00);
}