// from server: 100% by colin
// roc 2009-06 00890e60  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00890e60
//
// 00890e60  6a07                 push 7
// 00890e62  680c010000           push 0x10c
// 00890e67  68e0a88d00           push 0x8da8e0
// 00890e6c  68e85d8e00           push 0x8e5de8
// 00890e71  b9a8e7a400           mov ecx, 0xa4e7a8
// 00890e76  e80509dfff           call 0x681780
// 00890e7b  6820bf8900           push 0x89bf20
// 00890e80  e8768ce8ff           call 0x719afb
// 00890e85  59                   pop ecx
// 00890e86  c3                   ret 

extern int g_00890e60_0;
extern int g_00890e60_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00890e60(void*);
struct O_00890e60 { int m(void*, void*, int, int); };
extern O_00890e60 g_obj_00890e60;
extern int g_tail_00890e60;
void func_00890e60()
{
    g_obj_00890e60.m((void*)&g_00890e60_0, (void*)&g_00890e60_1, 268, 7);
    tail_fn_00890e60(&g_tail_00890e60);
}