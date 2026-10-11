// from server: 100% by colin
// roc 2007-08 007755e0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007755e0
//
// 007755e0  6a05                 push 5
// 007755e2  68fc000000           push 0xfc
// 007755e7  6844fd7b00           push 0x7bfd44
// 007755ec  68f0fd7b00           push 0x7bfdf0
// 007755f1  b9e0738c00           mov ecx, 0x8c73e0
// 007755f6  e8e57de7ff           call 0x5ed3e0
// 007755fb  6850c17700           push 0x77c150
// 00775600  e81eb7ebff           call 0x630d23
// 00775605  59                   pop ecx
// 00775606  c3                   ret 

extern int g_007755e0_0;
extern int g_007755e0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007755e0(void*);
struct O_007755e0 { int m(void*, void*, int, int); };
extern O_007755e0 g_obj_007755e0;
extern int g_tail_007755e0;
void func_007755e0()
{
    g_obj_007755e0.m((void*)&g_007755e0_0, (void*)&g_007755e0_1, 252, 5);
    tail_fn_007755e0(&g_tail_007755e0);
}