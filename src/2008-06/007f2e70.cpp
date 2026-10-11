// from server: 100% by colin
// roc 2008-06 007f2e70  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2e70
//
// 007f2e70  6a05                 push 5
// 007f2e72  6833010000           push 0x133
// 007f2e77  68b4e78200           push 0x82e7b4
// 007f2e7c  68a4e78200           push 0x82e7a4
// 007f2e81  b9d8449700           mov ecx, 0x9744d8
// 007f2e86  e8a522d7ff           call 0x565130
// 007f2e8b  6830cf7f00           push 0x7fcf30
// 007f2e90  e81ae9eaff           call 0x6a17af
// 007f2e95  59                   pop ecx
// 007f2e96  c3                   ret 

extern int g_007f2e70_0;
extern int g_007f2e70_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f2e70(void*);
struct O_007f2e70 { int m(void*, void*, int, int); };
extern O_007f2e70 g_obj_007f2e70;
extern int g_tail_007f2e70;
void func_007f2e70()
{
    g_obj_007f2e70.m((void*)&g_007f2e70_0, (void*)&g_007f2e70_1, 307, 5);
    tail_fn_007f2e70(&g_tail_007f2e70);
}