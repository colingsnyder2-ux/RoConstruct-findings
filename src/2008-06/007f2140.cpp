// from server: 100% by colin
// roc 2008-06 007f2140  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2140
//
// 007f2140  6a05                 push 5
// 007f2142  6850010000           push 0x150
// 007f2147  684c448200           push 0x82444c
// 007f214c  68c4448200           push 0x8244c4
// 007f2151  b900139700           mov ecx, 0x971300
// 007f2156  e87584cbff           call 0x4aa5d0
// 007f215b  6870bf7f00           push 0x7fbf70
// 007f2160  e84af6eaff           call 0x6a17af
// 007f2165  59                   pop ecx
// 007f2166  c3                   ret 

extern int g_007f2140_0;
extern int g_007f2140_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f2140(void*);
struct O_007f2140 { int m(void*, void*, int, int); };
extern O_007f2140 g_obj_007f2140;
extern int g_tail_007f2140;
void func_007f2140()
{
    g_obj_007f2140.m((void*)&g_007f2140_0, (void*)&g_007f2140_1, 336, 5);
    tail_fn_007f2140(&g_tail_007f2140);
}