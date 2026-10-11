// from server: 100% by colin
// roc 2007-08 007755b0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007755b0
//
// 007755b0  6a05                 push 5
// 007755b2  6810010000           push 0x110
// 007755b7  6844fd7b00           push 0x7bfd44
// 007755bc  6800fe7b00           push 0x7bfe00
// 007755c1  b930778c00           mov ecx, 0x8c7730
// 007755c6  e8d58de7ff           call 0x5ee3a0
// 007755cb  68d0c27700           push 0x77c2d0
// 007755d0  e84eb7ebff           call 0x630d23
// 007755d5  59                   pop ecx
// 007755d6  c3                   ret 

extern int g_007755b0_0;
extern int g_007755b0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007755b0(void*);
struct O_007755b0 { int m(void*, void*, int, int); };
extern O_007755b0 g_obj_007755b0;
extern int g_tail_007755b0;
void func_007755b0()
{
    g_obj_007755b0.m((void*)&g_007755b0_0, (void*)&g_007755b0_1, 272, 5);
    tail_fn_007755b0(&g_tail_007755b0);
}