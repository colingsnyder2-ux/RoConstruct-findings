// from server: 100% by colin
// roc 2009-06 0088e010  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088e010
//
// 0088e010  6a07                 push 7
// 0088e012  6894000000           push 0x94
// 0088e017  6840938b00           push 0x8b9340
// 0088e01c  6858f68d00           push 0x8df658
// 0088e021  b96cc4a400           mov ecx, 0xa4c46c
// 0088e026  e8e5eedbff           call 0x64cf10
// 0088e02b  6860a68900           push 0x89a660
// 0088e030  e8c6bae8ff           call 0x719afb
// 0088e035  59                   pop ecx
// 0088e036  c3                   ret 

extern int g_0088e010_0;
extern int g_0088e010_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088e010(void*);
struct O_0088e010 { int m(void*, void*, int, int); };
extern O_0088e010 g_obj_0088e010;
extern int g_tail_0088e010;
void func_0088e010()
{
    g_obj_0088e010.m((void*)&g_0088e010_0, (void*)&g_0088e010_1, 148, 7);
    tail_fn_0088e010(&g_tail_0088e010);
}