// from server: 100% by colin
// roc 2007-08 007753a0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007753a0
//
// 007753a0  6a05                 push 5
// 007753a2  6824010000           push 0x124
// 007753a7  6878fd7b00           push 0x7bfd78
// 007753ac  6894fd7b00           push 0x7bfd94
// 007753b1  b9f0758c00           mov ecx, 0x8c75f0
// 007753b6  e8c58be7ff           call 0x5edf80
// 007753bb  6830c07700           push 0x77c030
// 007753c0  e85eb9ebff           call 0x630d23
// 007753c5  59                   pop ecx
// 007753c6  c3                   ret 

extern int g_007753a0_0;
extern int g_007753a0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007753a0(void*);
struct O_007753a0 { int m(void*, void*, int, int); };
extern O_007753a0 g_obj_007753a0;
extern int g_tail_007753a0;
void func_007753a0()
{
    g_obj_007753a0.m((void*)&g_007753a0_0, (void*)&g_007753a0_1, 292, 5);
    tail_fn_007753a0(&g_tail_007753a0);
}