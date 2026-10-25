// from server: 100% by colin
// roc 2011-06 00a2ba70  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ba70
//
// 00a2ba70  6a00                 push 0
// 00a2ba72  6a1f                 push 0x1f
// 00a2ba74  6864010000           push 0x164
// 00a2ba79  6880d2aa00           push 0xaad280
// 00a2ba7e  689087a700           push 0xa78790
// 00a2ba83  b9d82acd00           mov ecx, 0xcd2ad8
// 00a2ba88  e8e371cdff           call 0x702c70
// 00a2ba8d  6820dda300           push 0xa3dd20
// 00a2ba92  e8c6f6ddff           call 0x80b15d
// 00a2ba97  59                   pop ecx
// 00a2ba98  c3                   ret 

extern int g_00a2ba70_0;
extern int g_00a2ba70_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2ba70(void*);
struct O_00a2ba70 { int m(void*, void*, int, int, int); };
extern O_00a2ba70 g_obj_00a2ba70;
extern int g_tail_00a2ba70;
void func_00a2ba70()
{
    g_obj_00a2ba70.m((void*)&g_00a2ba70_0, (void*)&g_00a2ba70_1, 356, 31, 0);
    tail_fn_00a2ba70(&g_tail_00a2ba70);
}