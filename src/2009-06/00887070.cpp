// from server: 100% by colin
// roc 2009-06 00887070  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887070
//
// 00887070  6a06                 push 6
// 00887072  68c4000000           push 0xc4
// 00887077  68584e8c00           push 0x8c4e58
// 0088707c  687c4e8c00           push 0x8c4e7c
// 00887081  b918d9a300           mov ecx, 0xa3d918
// 00887086  e8c540c3ff           call 0x4bb150
// 0088708b  6870508900           push 0x895070
// 00887090  e8662ae9ff           call 0x719afb
// 00887095  59                   pop ecx
// 00887096  c3                   ret 

extern int g_00887070_0;
extern int g_00887070_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887070(void*);
struct O_00887070 { int m(void*, void*, int, int); };
extern O_00887070 g_obj_00887070;
extern int g_tail_00887070;
void func_00887070()
{
    g_obj_00887070.m((void*)&g_00887070_0, (void*)&g_00887070_1, 196, 6);
    tail_fn_00887070(&g_tail_00887070);
}