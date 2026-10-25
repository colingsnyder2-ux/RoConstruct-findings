// from server: 100% by colin
// roc 2011-06 00a24ca0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24ca0
//
// 00a24ca0  6a00                 push 0
// 00a24ca2  6a1f                 push 0x1f
// 00a24ca4  68ac000000           push 0xac
// 00a24ca9  68b8b5a900           push 0xa9b5b8
// 00a24cae  68f0b5a900           push 0xa9b5f0
// 00a24cb3  b944dacc00           mov ecx, 0xccda44
// 00a24cb8  e83395c3ff           call 0x65e1f0
// 00a24cbd  68d0aca300           push 0xa3acd0
// 00a24cc2  e89664deff           call 0x80b15d
// 00a24cc7  59                   pop ecx
// 00a24cc8  c3                   ret 

extern int g_00a24ca0_0;
extern int g_00a24ca0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24ca0(void*);
struct O_00a24ca0 { int m(void*, void*, int, int, int); };
extern O_00a24ca0 g_obj_00a24ca0;
extern int g_tail_00a24ca0;
void func_00a24ca0()
{
    g_obj_00a24ca0.m((void*)&g_00a24ca0_0, (void*)&g_00a24ca0_1, 172, 31, 0);
    tail_fn_00a24ca0(&g_tail_00a24ca0);
}