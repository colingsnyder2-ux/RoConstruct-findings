// from server: 100% by colin
// roc 2007-08 007753d0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007753d0
//
// 007753d0  6a05                 push 5
// 007753d2  682c010000           push 0x12c
// 007753d7  68a4fd7b00           push 0x7bfda4
// 007753dc  689cfd7b00           push 0x7bfd9c
// 007753e1  b9e0768c00           mov ecx, 0x8c76e0
// 007753e6  e8958be7ff           call 0x5edf80
// 007753eb  6850c07700           push 0x77c050
// 007753f0  e82eb9ebff           call 0x630d23
// 007753f5  59                   pop ecx
// 007753f6  c3                   ret 

extern int g_007753d0_0;
extern int g_007753d0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007753d0(void*);
struct O_007753d0 { int m(void*, void*, int, int); };
extern O_007753d0 g_obj_007753d0;
extern int g_tail_007753d0;
void func_007753d0()
{
    g_obj_007753d0.m((void*)&g_007753d0_0, (void*)&g_007753d0_1, 300, 5);
    tail_fn_007753d0(&g_tail_007753d0);
}