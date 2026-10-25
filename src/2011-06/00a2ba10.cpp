// from server: 100% by colin
// roc 2011-06 00a2ba10  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ba10
//
// 00a2ba10  6a00                 push 0
// 00a2ba12  6a1f                 push 0x1f
// 00a2ba14  6854010000           push 0x154
// 00a2ba19  6880d2aa00           push 0xaad280
// 00a2ba1e  68c0b7a500           push 0xa5b7c0
// 00a2ba23  b9782bcd00           mov ecx, 0xcd2b78
// 00a2ba28  e87371cdff           call 0x702ba0
// 00a2ba2d  68e0dca300           push 0xa3dce0
// 00a2ba32  e826f7ddff           call 0x80b15d
// 00a2ba37  59                   pop ecx
// 00a2ba38  c3                   ret 

extern int g_00a2ba10_0;
extern int g_00a2ba10_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2ba10(void*);
struct O_00a2ba10 { int m(void*, void*, int, int, int); };
extern O_00a2ba10 g_obj_00a2ba10;
extern int g_tail_00a2ba10;
void func_00a2ba10()
{
    g_obj_00a2ba10.m((void*)&g_00a2ba10_0, (void*)&g_00a2ba10_1, 340, 31, 0);
    tail_fn_00a2ba10(&g_tail_00a2ba10);
}