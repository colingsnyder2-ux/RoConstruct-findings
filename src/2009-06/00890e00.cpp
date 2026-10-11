// from server: 100% by colin
// roc 2009-06 00890e00  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00890e00
//
// 00890e00  6a07                 push 7
// 00890e02  68cc000000           push 0xcc
// 00890e07  68e0a88d00           push 0x8da8e0
// 00890e0c  68d05d8e00           push 0x8e5dd0
// 00890e11  b980e7a400           mov ecx, 0xa4e780
// 00890e16  e86509dfff           call 0x681780
// 00890e1b  68e0be8900           push 0x89bee0
// 00890e20  e8d68ce8ff           call 0x719afb
// 00890e25  59                   pop ecx
// 00890e26  c3                   ret 

extern int g_00890e00_0;
extern int g_00890e00_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00890e00(void*);
struct O_00890e00 { int m(void*, void*, int, int); };
extern O_00890e00 g_obj_00890e00;
extern int g_tail_00890e00;
void func_00890e00()
{
    g_obj_00890e00.m((void*)&g_00890e00_0, (void*)&g_00890e00_1, 204, 7);
    tail_fn_00890e00(&g_tail_00890e00);
}