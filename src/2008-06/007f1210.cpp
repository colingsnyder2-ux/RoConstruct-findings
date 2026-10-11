// from server: 100% by colin
// roc 2008-06 007f1210  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1210
//
// 007f1210  6a04                 push 4
// 007f1212  68cc010000           push 0x1cc
// 007f1217  68e0248200           push 0x8224e0
// 007f121c  6834258200           push 0x822534
// 007f1221  b9f0fc9600           mov ecx, 0x96fcf0
// 007f1226  e8f508caff           call 0x491b20
// 007f122b  68a0b17f00           push 0x7fb1a0
// 007f1230  e87a05ebff           call 0x6a17af
// 007f1235  59                   pop ecx
// 007f1236  c3                   ret 

extern int g_007f1210_0;
extern int g_007f1210_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1210(void*);
struct O_007f1210 { int m(void*, void*, int, int); };
extern O_007f1210 g_obj_007f1210;
extern int g_tail_007f1210;
void func_007f1210()
{
    g_obj_007f1210.m((void*)&g_007f1210_0, (void*)&g_007f1210_1, 460, 4);
    tail_fn_007f1210(&g_tail_007f1210);
}