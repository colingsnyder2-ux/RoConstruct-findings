// from server: 100% by colin
// roc 2011-06 00a1be90  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1be90
//
// 00a1be90  6a00                 push 0
// 00a1be92  6a1f                 push 0x1f
// 00a1be94  68a1000000           push 0xa1
// 00a1be99  68089ba800           push 0xa89b08
// 00a1be9e  68f49aa800           push 0xa89af4
// 00a1bea3  b980b1cb00           mov ecx, 0xcbb180
// 00a1bea8  e83338b7ff           call 0x58f6e0
// 00a1bead  68104ca300           push 0xa34c10
// 00a1beb2  e8a6f2deff           call 0x80b15d
// 00a1beb7  59                   pop ecx
// 00a1beb8  c3                   ret 

extern int g_00a1be90_0;
extern int g_00a1be90_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1be90(void*);
struct O_00a1be90 { int m(void*, void*, int, int, int); };
extern O_00a1be90 g_obj_00a1be90;
extern int g_tail_00a1be90;
void func_00a1be90()
{
    g_obj_00a1be90.m((void*)&g_00a1be90_0, (void*)&g_00a1be90_1, 161, 31, 0);
    tail_fn_00a1be90(&g_tail_00a1be90);
}