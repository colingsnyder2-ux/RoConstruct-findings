// from server: 100% by colin
// roc 2009-06 0088e0e0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088e0e0
//
// 0088e0e0  6a07                 push 7
// 0088e0e2  68ac000000           push 0xac
// 0088e0e7  68584e8c00           push 0x8c4e58
// 0088e0ec  68e4f88d00           push 0x8df8e4
// 0088e0f1  b9e8c4a400           mov ecx, 0xa4c4e8
// 0088e0f6  e88504dcff           call 0x64e580
// 0088e0fb  6890a68900           push 0x89a690
// 0088e100  e8f6b9e8ff           call 0x719afb
// 0088e105  59                   pop ecx
// 0088e106  c3                   ret 

extern int g_0088e0e0_0;
extern int g_0088e0e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088e0e0(void*);
struct O_0088e0e0 { int m(void*, void*, int, int); };
extern O_0088e0e0 g_obj_0088e0e0;
extern int g_tail_0088e0e0;
void func_0088e0e0()
{
    g_obj_0088e0e0.m((void*)&g_0088e0e0_0, (void*)&g_0088e0e0_1, 172, 7);
    tail_fn_0088e0e0(&g_tail_0088e0e0);
}