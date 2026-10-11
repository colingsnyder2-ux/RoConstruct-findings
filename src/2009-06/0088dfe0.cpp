// from server: 100% by colin
// roc 2009-06 0088dfe0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088dfe0
//
// 0088dfe0  6a07                 push 7
// 0088dfe2  6890000000           push 0x90
// 0088dfe7  683cf68d00           push 0x8df63c
// 0088dfec  6844f68d00           push 0x8df644
// 0088dff1  b988c4a400           mov ecx, 0xa4c488
// 0088dff6  e845eedbff           call 0x64ce40
// 0088dffb  6800a68900           push 0x89a600
// 0088e000  e8f6bae8ff           call 0x719afb
// 0088e005  59                   pop ecx
// 0088e006  c3                   ret 

extern int g_0088dfe0_0;
extern int g_0088dfe0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088dfe0(void*);
struct O_0088dfe0 { int m(void*, void*, int, int); };
extern O_0088dfe0 g_obj_0088dfe0;
extern int g_tail_0088dfe0;
void func_0088dfe0()
{
    g_obj_0088dfe0.m((void*)&g_0088dfe0_0, (void*)&g_0088dfe0_1, 144, 7);
    tail_fn_0088dfe0(&g_tail_0088dfe0);
}