// from server: 100% by colin
// roc 2008-06 007f11e0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f11e0
//
// 007f11e0  6a04                 push 4
// 007f11e2  68c8010000           push 0x1c8
// 007f11e7  68e0248200           push 0x8224e0
// 007f11ec  6820258200           push 0x822520
// 007f11f1  b9d0fd9600           mov ecx, 0x96fdd0
// 007f11f6  e82509caff           call 0x491b20
// 007f11fb  6880b17f00           push 0x7fb180
// 007f1200  e8aa05ebff           call 0x6a17af
// 007f1205  59                   pop ecx
// 007f1206  c3                   ret 

extern int g_007f11e0_0;
extern int g_007f11e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f11e0(void*);
struct O_007f11e0 { int m(void*, void*, int, int); };
extern O_007f11e0 g_obj_007f11e0;
extern int g_tail_007f11e0;
void func_007f11e0()
{
    g_obj_007f11e0.m((void*)&g_007f11e0_0, (void*)&g_007f11e0_1, 456, 4);
    tail_fn_007f11e0(&g_tail_007f11e0);
}