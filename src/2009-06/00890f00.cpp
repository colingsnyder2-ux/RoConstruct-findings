// from server: 100% by colin
// roc 2009-06 00890f00  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00890f00
//
// 00890f00  6a07                 push 7
// 00890f02  684c010000           push 0x14c
// 00890f07  68e0a88d00           push 0x8da8e0
// 00890f0c  680c5e8e00           push 0x8e5e0c
// 00890f11  b9d8e6a400           mov ecx, 0xa4e6d8
// 00890f16  e8d509dfff           call 0x6818f0
// 00890f1b  68a0bf8900           push 0x89bfa0
// 00890f20  e8d68be8ff           call 0x719afb
// 00890f25  59                   pop ecx
// 00890f26  c3                   ret 

extern int g_00890f00_0;
extern int g_00890f00_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00890f00(void*);
struct O_00890f00 { int m(void*, void*, int, int); };
extern O_00890f00 g_obj_00890f00;
extern int g_tail_00890f00;
void func_00890f00()
{
    g_obj_00890f00.m((void*)&g_00890f00_0, (void*)&g_00890f00_1, 332, 7);
    tail_fn_00890f00(&g_tail_00890f00);
}