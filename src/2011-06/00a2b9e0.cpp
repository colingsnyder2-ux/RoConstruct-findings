// from server: 100% by colin
// roc 2011-06 00a2b9e0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b9e0
//
// 00a2b9e0  6a00                 push 0
// 00a2b9e2  6a1f                 push 0x1f
// 00a2b9e4  6850010000           push 0x150
// 00a2b9e9  6880d2aa00           push 0xaad280
// 00a2b9ee  681cd3aa00           push 0xaad31c
// 00a2b9f3  b9782acd00           mov ecx, 0xcd2a78
// 00a2b9f8  e8a371cdff           call 0x702ba0
// 00a2b9fd  6800dda300           push 0xa3dd00
// 00a2ba02  e856f7ddff           call 0x80b15d
// 00a2ba07  59                   pop ecx
// 00a2ba08  c3                   ret 

extern int g_00a2b9e0_0;
extern int g_00a2b9e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b9e0(void*);
struct O_00a2b9e0 { int m(void*, void*, int, int, int); };
extern O_00a2b9e0 g_obj_00a2b9e0;
extern int g_tail_00a2b9e0;
void func_00a2b9e0()
{
    g_obj_00a2b9e0.m((void*)&g_00a2b9e0_0, (void*)&g_00a2b9e0_1, 336, 31, 0);
    tail_fn_00a2b9e0(&g_tail_00a2b9e0);
}