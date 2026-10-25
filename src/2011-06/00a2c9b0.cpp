// from server: 100% by colin
// roc 2011-06 00a2c9b0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c9b0
//
// 00a2c9b0  6a00                 push 0
// 00a2c9b2  6a1f                 push 0x1f
// 00a2c9b4  6894000000           push 0x94
// 00a2c9b9  68e483a700           push 0xa783e4
// 00a2c9be  68546ca900           push 0xa96c54
// 00a2c9c3  b9d037cd00           mov ecx, 0xcd37d0
// 00a2c9c8  e8a377ceff           call 0x714170
// 00a2c9cd  68a0e6a300           push 0xa3e6a0
// 00a2c9d2  e886e7ddff           call 0x80b15d
// 00a2c9d7  59                   pop ecx
// 00a2c9d8  c3                   ret 

extern int g_00a2c9b0_0;
extern int g_00a2c9b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c9b0(void*);
struct O_00a2c9b0 { int m(void*, void*, int, int, int); };
extern O_00a2c9b0 g_obj_00a2c9b0;
extern int g_tail_00a2c9b0;
void func_00a2c9b0()
{
    g_obj_00a2c9b0.m((void*)&g_00a2c9b0_0, (void*)&g_00a2c9b0_1, 148, 31, 0);
    tail_fn_00a2c9b0(&g_tail_00a2c9b0);
}