// from server: 100% by colin
// roc 2009-06 0088dfb0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088dfb0
//
// 0088dfb0  6a07                 push 7
// 0088dfb2  688c000000           push 0x8c
// 0088dfb7  683cf68d00           push 0x8df63c
// 0088dfbc  6830f68d00           push 0x8df630
// 0088dfc1  b9b0c4a400           mov ecx, 0xa4c4b0
// 0088dfc6  e875eedbff           call 0x64ce40
// 0088dfcb  6820a68900           push 0x89a620
// 0088dfd0  e826bbe8ff           call 0x719afb
// 0088dfd5  59                   pop ecx
// 0088dfd6  c3                   ret 

extern int g_0088dfb0_0;
extern int g_0088dfb0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088dfb0(void*);
struct O_0088dfb0 { int m(void*, void*, int, int); };
extern O_0088dfb0 g_obj_0088dfb0;
extern int g_tail_0088dfb0;
void func_0088dfb0()
{
    g_obj_0088dfb0.m((void*)&g_0088dfb0_0, (void*)&g_0088dfb0_1, 140, 7);
    tail_fn_0088dfb0(&g_tail_0088dfb0);
}