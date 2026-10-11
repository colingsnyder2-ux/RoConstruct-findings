// from server: 100% by colin
// roc 2008-06 007f3fb0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3fb0
//
// 007f3fb0  6a05                 push 5
// 007f3fb2  6858010000           push 0x158
// 007f3fb7  6844d98200           push 0x82d944
// 007f3fbc  684ce38200           push 0x82e34c
// 007f3fc1  b954579700           mov ecx, 0x975754
// 007f3fc6  e84527d9ff           call 0x586710
// 007f3fcb  68b0d87f00           push 0x7fd8b0
// 007f3fd0  e8dad7eaff           call 0x6a17af
// 007f3fd5  59                   pop ecx
// 007f3fd6  c3                   ret 

extern int g_007f3fb0_0;
extern int g_007f3fb0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f3fb0(void*);
struct O_007f3fb0 { int m(void*, void*, int, int); };
extern O_007f3fb0 g_obj_007f3fb0;
extern int g_tail_007f3fb0;
void func_007f3fb0()
{
    g_obj_007f3fb0.m((void*)&g_007f3fb0_0, (void*)&g_007f3fb0_1, 344, 5);
    tail_fn_007f3fb0(&g_tail_007f3fb0);
}