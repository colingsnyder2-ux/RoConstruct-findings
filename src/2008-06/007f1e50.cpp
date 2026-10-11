// from server: 100% by colin
// roc 2008-06 007f1e50  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1e50
//
// 007f1e50  6a05                 push 5
// 007f1e52  6833010000           push 0x133
// 007f1e57  68a0438200           push 0x8243a0
// 007f1e5c  68bc438200           push 0x8243bc
// 007f1e61  b948129700           mov ecx, 0x971248
// 007f1e66  e8c585cbff           call 0x4aa430
// 007f1e6b  6850bd7f00           push 0x7fbd50
// 007f1e70  e83af9eaff           call 0x6a17af
// 007f1e75  59                   pop ecx
// 007f1e76  c3                   ret 

extern int g_007f1e50_0;
extern int g_007f1e50_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1e50(void*);
struct O_007f1e50 { int m(void*, void*, int, int); };
extern O_007f1e50 g_obj_007f1e50;
extern int g_tail_007f1e50;
void func_007f1e50()
{
    g_obj_007f1e50.m((void*)&g_007f1e50_0, (void*)&g_007f1e50_1, 307, 5);
    tail_fn_007f1e50(&g_tail_007f1e50);
}