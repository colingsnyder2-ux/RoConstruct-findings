// from server: 100% by colin
// roc 2009-06 00891a70  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891a70
//
// 00891a70  6a07                 push 7
// 00891a72  68a0000000           push 0xa0
// 00891a77  68584e8c00           push 0x8c4e58
// 00891a7c  68e07b8e00           push 0x8e7be0
// 00891a81  b9e8f1a400           mov ecx, 0xa4f1e8
// 00891a86  e87545e0ff           call 0x696000
// 00891a8b  68f0c88900           push 0x89c8f0
// 00891a90  e86680e8ff           call 0x719afb
// 00891a95  59                   pop ecx
// 00891a96  c3                   ret 

extern int g_00891a70_0;
extern int g_00891a70_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891a70(void*);
struct O_00891a70 { int m(void*, void*, int, int); };
extern O_00891a70 g_obj_00891a70;
extern int g_tail_00891a70;
void func_00891a70()
{
    g_obj_00891a70.m((void*)&g_00891a70_0, (void*)&g_00891a70_1, 160, 7);
    tail_fn_00891a70(&g_tail_00891a70);
}