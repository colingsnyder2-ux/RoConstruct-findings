// from server: 100% by colin
// roc 2008-06 007f10c0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f10c0
//
// 007f10c0  6a04                 push 4
// 007f10c2  68b0010000           push 0x1b0
// 007f10c7  6890248200           push 0x822490
// 007f10cc  68b4248200           push 0x8224b4
// 007f10d1  b9e4fe9600           mov ecx, 0x96fee4
// 007f10d6  e87509caff           call 0x491a50
// 007f10db  6800b27f00           push 0x7fb200
// 007f10e0  e8ca06ebff           call 0x6a17af
// 007f10e5  59                   pop ecx
// 007f10e6  c3                   ret 

extern int g_007f10c0_0;
extern int g_007f10c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f10c0(void*);
struct O_007f10c0 { int m(void*, void*, int, int); };
extern O_007f10c0 g_obj_007f10c0;
extern int g_tail_007f10c0;
void func_007f10c0()
{
    g_obj_007f10c0.m((void*)&g_007f10c0_0, (void*)&g_007f10c0_1, 432, 4);
    tail_fn_007f10c0(&g_tail_007f10c0);
}