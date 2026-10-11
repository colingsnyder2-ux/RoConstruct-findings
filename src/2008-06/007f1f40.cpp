// from server: 100% by colin
// roc 2008-06 007f1f40  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1f40
//
// 007f1f40  6a05                 push 5
// 007f1f42  6843010000           push 0x143
// 007f1f47  68a0438200           push 0x8243a0
// 007f1f4c  68fc438200           push 0x8243fc
// 007f1f51  b954139700           mov ecx, 0x971354
// 007f1f56  e8d584cbff           call 0x4aa430
// 007f1f5b  68f0bd7f00           push 0x7fbdf0
// 007f1f60  e84af8eaff           call 0x6a17af
// 007f1f65  59                   pop ecx
// 007f1f66  c3                   ret 

extern int g_007f1f40_0;
extern int g_007f1f40_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1f40(void*);
struct O_007f1f40 { int m(void*, void*, int, int); };
extern O_007f1f40 g_obj_007f1f40;
extern int g_tail_007f1f40;
void func_007f1f40()
{
    g_obj_007f1f40.m((void*)&g_007f1f40_0, (void*)&g_007f1f40_1, 323, 5);
    tail_fn_007f1f40(&g_tail_007f1f40);
}