// from server: 100% by colin
// roc 2008-06 007f1150  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1150
//
// 007f1150  6a04                 push 4
// 007f1152  68bc010000           push 0x1bc
// 007f1157  68e0248200           push 0x8224e0
// 007f115c  68e8248200           push 0x8224e8
// 007f1161  b9ecfd9600           mov ecx, 0x96fdec
// 007f1166  e8b509caff           call 0x491b20
// 007f116b  6860b27f00           push 0x7fb260
// 007f1170  e83a06ebff           call 0x6a17af
// 007f1175  59                   pop ecx
// 007f1176  c3                   ret 

extern int g_007f1150_0;
extern int g_007f1150_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1150(void*);
struct O_007f1150 { int m(void*, void*, int, int); };
extern O_007f1150 g_obj_007f1150;
extern int g_tail_007f1150;
void func_007f1150()
{
    g_obj_007f1150.m((void*)&g_007f1150_0, (void*)&g_007f1150_1, 444, 4);
    tail_fn_007f1150(&g_tail_007f1150);
}