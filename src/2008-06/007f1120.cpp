// from server: 100% by colin
// roc 2008-06 007f1120  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1120
//
// 007f1120  6a04                 push 4
// 007f1122  68b8010000           push 0x1b8
// 007f1127  68e0248200           push 0x8224e0
// 007f112c  68cc248200           push 0x8224cc
// 007f1131  b908fe9600           mov ecx, 0x96fe08
// 007f1136  e8e509caff           call 0x491b20
// 007f113b  6880b27f00           push 0x7fb280
// 007f1140  e86a06ebff           call 0x6a17af
// 007f1145  59                   pop ecx
// 007f1146  c3                   ret 

extern int g_007f1120_0;
extern int g_007f1120_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1120(void*);
struct O_007f1120 { int m(void*, void*, int, int); };
extern O_007f1120 g_obj_007f1120;
extern int g_tail_007f1120;
void func_007f1120()
{
    g_obj_007f1120.m((void*)&g_007f1120_0, (void*)&g_007f1120_1, 440, 4);
    tail_fn_007f1120(&g_tail_007f1120);
}