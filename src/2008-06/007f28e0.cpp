// from server: 100% by colin
// roc 2008-06 007f28e0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f28e0
//
// 007f28e0  6a05                 push 5
// 007f28e2  682c010000           push 0x12c
// 007f28e7  6844d98200           push 0x82d944
// 007f28ec  6838d98200           push 0x82d938
// 007f28f1  b9743e9700           mov ecx, 0x973e74
// 007f28f6  e8056ed6ff           call 0x559700
// 007f28fb  68c0c87f00           push 0x7fc8c0
// 007f2900  e8aaeeeaff           call 0x6a17af
// 007f2905  59                   pop ecx
// 007f2906  c3                   ret 

extern int g_007f28e0_0;
extern int g_007f28e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f28e0(void*);
struct O_007f28e0 { int m(void*, void*, int, int); };
extern O_007f28e0 g_obj_007f28e0;
extern int g_tail_007f28e0;
void func_007f28e0()
{
    g_obj_007f28e0.m((void*)&g_007f28e0_0, (void*)&g_007f28e0_1, 300, 5);
    tail_fn_007f28e0(&g_tail_007f28e0);
}