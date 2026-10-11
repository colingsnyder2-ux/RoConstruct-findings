// from server: 100% by colin
// roc 2008-06 007f55c0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f55c0
//
// 007f55c0  6a05                 push 5
// 007f55c2  6834010000           push 0x134
// 007f55c7  68e0878300           push 0x8387e0
// 007f55cc  68e8878300           push 0x8387e8
// 007f55d1  b934779700           mov ecx, 0x977734
// 007f55d6  e8e59ddcff           call 0x5bf3c0
// 007f55db  6800e67f00           push 0x7fe600
// 007f55e0  e8cac1eaff           call 0x6a17af
// 007f55e5  59                   pop ecx
// 007f55e6  c3                   ret 

extern int g_007f55c0_0;
extern int g_007f55c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f55c0(void*);
struct O_007f55c0 { int m(void*, void*, int, int); };
extern O_007f55c0 g_obj_007f55c0;
extern int g_tail_007f55c0;
void func_007f55c0()
{
    g_obj_007f55c0.m((void*)&g_007f55c0_0, (void*)&g_007f55c0_1, 308, 5);
    tail_fn_007f55c0(&g_tail_007f55c0);
}