// from server: 100% by colin
// roc 2011-06 00a2c7c0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c7c0
//
// 00a2c7c0  6a00                 push 0
// 00a2c7c2  6a1f                 push 0x1f
// 00a2c7c4  6894000000           push 0x94
// 00a2c7c9  68e483a700           push 0xa783e4
// 00a2c7ce  68546ca900           push 0xa96c54
// 00a2c7d3  b99836cd00           mov ecx, 0xcd3698
// 00a2c7d8  e8e371ceff           call 0x7139c0
// 00a2c7dd  6840e6a300           push 0xa3e640
// 00a2c7e2  e876e9ddff           call 0x80b15d
// 00a2c7e7  59                   pop ecx
// 00a2c7e8  c3                   ret 

extern int g_00a2c7c0_0;
extern int g_00a2c7c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c7c0(void*);
struct O_00a2c7c0 { int m(void*, void*, int, int, int); };
extern O_00a2c7c0 g_obj_00a2c7c0;
extern int g_tail_00a2c7c0;
void func_00a2c7c0()
{
    g_obj_00a2c7c0.m((void*)&g_00a2c7c0_0, (void*)&g_00a2c7c0_1, 148, 31, 0);
    tail_fn_00a2c7c0(&g_tail_00a2c7c0);
}