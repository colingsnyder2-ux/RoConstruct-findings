// from server: 100% by colin
// roc 2011-06 00a24c70  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24c70
//
// 00a24c70  6a00                 push 0
// 00a24c72  6a1f                 push 0x1f
// 00a24c74  68a8000000           push 0xa8
// 00a24c79  68b8b5a900           push 0xa9b5b8
// 00a24c7e  68e8b5a900           push 0xa9b5e8
// 00a24c83  b9e0d9cc00           mov ecx, 0xccd9e0
// 00a24c88  e86395c3ff           call 0x65e1f0
// 00a24c8d  68b0aca300           push 0xa3acb0
// 00a24c92  e8c664deff           call 0x80b15d
// 00a24c97  59                   pop ecx
// 00a24c98  c3                   ret 

extern int g_00a24c70_0;
extern int g_00a24c70_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24c70(void*);
struct O_00a24c70 { int m(void*, void*, int, int, int); };
extern O_00a24c70 g_obj_00a24c70;
extern int g_tail_00a24c70;
void func_00a24c70()
{
    g_obj_00a24c70.m((void*)&g_00a24c70_0, (void*)&g_00a24c70_1, 168, 31, 0);
    tail_fn_00a24c70(&g_tail_00a24c70);
}