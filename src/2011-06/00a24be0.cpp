// from server: 100% by colin
// roc 2011-06 00a24be0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24be0
//
// 00a24be0  6a00                 push 0
// 00a24be2  6a1f                 push 0x1f
// 00a24be4  6894000000           push 0x94
// 00a24be9  68b8b5a900           push 0xa9b5b8
// 00a24bee  68b0b5a900           push 0xa9b5b0
// 00a24bf3  b924dacc00           mov ecx, 0xccda24
// 00a24bf8  e8f395c3ff           call 0x65e1f0
// 00a24bfd  6810ada300           push 0xa3ad10
// 00a24c02  e85665deff           call 0x80b15d
// 00a24c07  59                   pop ecx
// 00a24c08  c3                   ret 

extern int g_00a24be0_0;
extern int g_00a24be0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24be0(void*);
struct O_00a24be0 { int m(void*, void*, int, int, int); };
extern O_00a24be0 g_obj_00a24be0;
extern int g_tail_00a24be0;
void func_00a24be0()
{
    g_obj_00a24be0.m((void*)&g_00a24be0_0, (void*)&g_00a24be0_1, 148, 31, 0);
    tail_fn_00a24be0(&g_tail_00a24be0);
}