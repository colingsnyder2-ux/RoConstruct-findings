// from server: 100% by colin
// roc 2009-06 00891700  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891700
//
// 00891700  6a07                 push 7
// 00891702  6864010000           push 0x164
// 00891707  689c788e00           push 0x8e789c
// 0089170c  6868798e00           push 0x8e7968
// 00891711  b94ceda400           mov ecx, 0xa4ed4c
// 00891716  e8c51fe0ff           call 0x6936e0
// 0089171b  6800c58900           push 0x89c500
// 00891720  e8d683e8ff           call 0x719afb
// 00891725  59                   pop ecx
// 00891726  c3                   ret 

extern int g_00891700_0;
extern int g_00891700_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891700(void*);
struct O_00891700 { int m(void*, void*, int, int); };
extern O_00891700 g_obj_00891700;
extern int g_tail_00891700;
void func_00891700()
{
    g_obj_00891700.m((void*)&g_00891700_0, (void*)&g_00891700_1, 356, 7);
    tail_fn_00891700(&g_tail_00891700);
}