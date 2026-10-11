// from server: 100% by colin
// roc 2008-06 007f1c20  unit: seg_007f0000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1c20
//
// 007f1c20  689c328200           push 0x82329c
// 007f1c25  6894328200           push 0x823294
// 007f1c2a  6858328200           push 0x823258
// 007f1c2f  6880328200           push 0x823280
// 007f1c34  b9b40b9700           mov ecx, 0x970bb4
// 007f1c39  e812e5caff           call 0x4a0150
// 007f1c3e  6820bb7f00           push 0x7fbb20
// 007f1c43  e867fbeaff           call 0x6a17af
// 007f1c48  59                   pop ecx
// 007f1c49  c3                   ret 

extern int g_007f1c20_0;
extern int g_007f1c20_1;
extern int g_007f1c20_2;
extern int g_007f1c20_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1c20(void*);
struct O_007f1c20 { int m(void*, void*, void*, void*); };
extern O_007f1c20 g_obj_007f1c20;
extern int g_tail_007f1c20;
void func_007f1c20()
{
    g_obj_007f1c20.m((void*)&g_007f1c20_0, (void*)&g_007f1c20_1, (void*)&g_007f1c20_2, (void*)&g_007f1c20_3);
    tail_fn_007f1c20(&g_tail_007f1c20);
}