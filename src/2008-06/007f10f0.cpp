// from server: 100% by colin
// roc 2008-06 007f10f0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f10f0
//
// 007f10f0  6a04                 push 4
// 007f10f2  68b1010000           push 0x1b1
// 007f10f7  6890248200           push 0x822490
// 007f10fc  68bc248200           push 0x8224bc
// 007f1101  b9d4fc9600           mov ecx, 0x96fcd4
// 007f1106  e84509caff           call 0x491a50
// 007f110b  68e0b17f00           push 0x7fb1e0
// 007f1110  e89a06ebff           call 0x6a17af
// 007f1115  59                   pop ecx
// 007f1116  c3                   ret 

extern int g_007f10f0_0;
extern int g_007f10f0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f10f0(void*);
struct O_007f10f0 { int m(void*, void*, int, int); };
extern O_007f10f0 g_obj_007f10f0;
extern int g_tail_007f10f0;
void func_007f10f0()
{
    g_obj_007f10f0.m((void*)&g_007f10f0_0, (void*)&g_007f10f0_1, 433, 4);
    tail_fn_007f10f0(&g_tail_007f10f0);
}