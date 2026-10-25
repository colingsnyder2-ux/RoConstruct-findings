// from server: 100% by colin
// roc 2011-06 00a2bbf0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bbf0
//
// 00a2bbf0  6a00                 push 0
// 00a2bbf2  6a1f                 push 0x1f
// 00a2bbf4  6850010000           push 0x150
// 00a2bbf9  6880d2aa00           push 0xaad280
// 00a2bbfe  681cd3aa00           push 0xaad31c
// 00a2bc03  b9402dcd00           mov ecx, 0xcd2d40
// 00a2bc08  e8d372cdff           call 0x702ee0
// 00a2bc0d  6800dea300           push 0xa3de00
// 00a2bc12  e846f5ddff           call 0x80b15d
// 00a2bc17  59                   pop ecx
// 00a2bc18  c3                   ret 

extern int g_00a2bbf0_0;
extern int g_00a2bbf0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bbf0(void*);
struct O_00a2bbf0 { int m(void*, void*, int, int, int); };
extern O_00a2bbf0 g_obj_00a2bbf0;
extern int g_tail_00a2bbf0;
void func_00a2bbf0()
{
    g_obj_00a2bbf0.m((void*)&g_00a2bbf0_0, (void*)&g_00a2bbf0_1, 336, 31, 0);
    tail_fn_00a2bbf0(&g_tail_00a2bbf0);
}