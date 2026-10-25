// from server: 100% by colin
// roc 2011-06 00a2bcb0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bcb0
//
// 00a2bcb0  6a00                 push 0
// 00a2bcb2  6a1f                 push 0x1f
// 00a2bcb4  6850010000           push 0x150
// 00a2bcb9  6880d2aa00           push 0xaad280
// 00a2bcbe  6870d3aa00           push 0xaad370
// 00a2bcc3  b9802dcd00           mov ecx, 0xcd2d80
// 00a2bcc8  e88374cdff           call 0x703150
// 00a2bccd  6860dea300           push 0xa3de60
// 00a2bcd2  e886f4ddff           call 0x80b15d
// 00a2bcd7  59                   pop ecx
// 00a2bcd8  c3                   ret 

extern int g_00a2bcb0_0;
extern int g_00a2bcb0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bcb0(void*);
struct O_00a2bcb0 { int m(void*, void*, int, int, int); };
extern O_00a2bcb0 g_obj_00a2bcb0;
extern int g_tail_00a2bcb0;
void func_00a2bcb0()
{
    g_obj_00a2bcb0.m((void*)&g_00a2bcb0_0, (void*)&g_00a2bcb0_1, 336, 31, 0);
    tail_fn_00a2bcb0(&g_tail_00a2bcb0);
}