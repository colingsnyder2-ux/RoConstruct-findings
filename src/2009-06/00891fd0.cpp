// from server: 100% by colin
// roc 2009-06 00891fd0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891fd0
//
// 00891fd0  6a07                 push 7
// 00891fd2  68a0000000           push 0xa0
// 00891fd7  68584e8c00           push 0x8c4e58
// 00891fdc  6814a98d00           push 0x8da914
// 00891fe1  b964f7a400           mov ecx, 0xa4f764
// 00891fe6  e805ebe0ff           call 0x6a0af0
// 00891feb  68f0cb8900           push 0x89cbf0
// 00891ff0  e8067be8ff           call 0x719afb
// 00891ff5  59                   pop ecx
// 00891ff6  c3                   ret 

extern int g_00891fd0_0;
extern int g_00891fd0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891fd0(void*);
struct O_00891fd0 { int m(void*, void*, int, int); };
extern O_00891fd0 g_obj_00891fd0;
extern int g_tail_00891fd0;
void func_00891fd0()
{
    g_obj_00891fd0.m((void*)&g_00891fd0_0, (void*)&g_00891fd0_1, 160, 7);
    tail_fn_00891fd0(&g_tail_00891fd0);
}