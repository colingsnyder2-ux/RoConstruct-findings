// from server: 100% by colin
// roc 2007-08 00775460  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775460
//
// 00775460  6a05                 push 5
// 00775462  6840010000           push 0x140
// 00775467  6844fd7b00           push 0x7bfd44
// 0077546c  68c0fd7b00           push 0x7bfdc0
// 00775471  b9c4738c00           mov ecx, 0x8c73c4
// 00775476  e8058be7ff           call 0x5edf80
// 0077547b  6890c07700           push 0x77c090
// 00775480  e89eb8ebff           call 0x630d23
// 00775485  59                   pop ecx
// 00775486  c3                   ret 

extern int g_00775460_0;
extern int g_00775460_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775460(void*);
struct O_00775460 { int m(void*, void*, int, int); };
extern O_00775460 g_obj_00775460;
extern int g_tail_00775460;
void func_00775460()
{
    g_obj_00775460.m((void*)&g_00775460_0, (void*)&g_00775460_1, 320, 5);
    tail_fn_00775460(&g_tail_00775460);
}