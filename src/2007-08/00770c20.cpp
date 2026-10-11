// from server: 100% by colin
// roc 2007-08 00770c20  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770c20
//
// 00770c20  6a05                 push 5
// 00770c22  68e8000000           push 0xe8
// 00770c27  68c06d7a00           push 0x7a6dc0
// 00770c2c  68ac6d7a00           push 0x7a6dac
// 00770c31  b93c178c00           mov ecx, 0x8c173c
// 00770c36  e8c532ddff           call 0x543f00
// 00770c3b  68c0997700           push 0x7799c0
// 00770c40  e8de00ecff           call 0x630d23
// 00770c45  59                   pop ecx
// 00770c46  c3                   ret 

extern int g_00770c20_0;
extern int g_00770c20_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00770c20(void*);
struct O_00770c20 { int m(void*, void*, int, int); };
extern O_00770c20 g_obj_00770c20;
extern int g_tail_00770c20;
void func_00770c20()
{
    g_obj_00770c20.m((void*)&g_00770c20_0, (void*)&g_00770c20_1, 232, 5);
    tail_fn_00770c20(&g_tail_00770c20);
}