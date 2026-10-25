// from server: 100% by colin
// roc 2011-06 00a2b3c0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b3c0
//
// 00a2b3c0  6a00                 push 0
// 00a2b3c2  6a1f                 push 0x1f
// 00a2b3c4  6894000000           push 0x94
// 00a2b3c9  68e483a700           push 0xa783e4
// 00a2b3ce  68546ca900           push 0xa96c54
// 00a2b3d3  b9d828cd00           mov ecx, 0xcd28d8
// 00a2b3d8  e88305cdff           call 0x6fb960
// 00a2b3dd  68d0daa300           push 0xa3dad0
// 00a2b3e2  e876fdddff           call 0x80b15d
// 00a2b3e7  59                   pop ecx
// 00a2b3e8  c3                   ret 

extern int g_00a2b3c0_0;
extern int g_00a2b3c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b3c0(void*);
struct O_00a2b3c0 { int m(void*, void*, int, int, int); };
extern O_00a2b3c0 g_obj_00a2b3c0;
extern int g_tail_00a2b3c0;
void func_00a2b3c0()
{
    g_obj_00a2b3c0.m((void*)&g_00a2b3c0_0, (void*)&g_00a2b3c0_1, 148, 31, 0);
    tail_fn_00a2b3c0(&g_tail_00a2b3c0);
}