// from server: 100% by colin
// roc 2009-06 008914b0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008914b0
//
// 008914b0  6a07                 push 7
// 008914b2  6894010000           push 0x194
// 008914b7  68fc788e00           push 0x8e78fc
// 008914bc  680c798e00           push 0x8e790c
// 008914c1  b96ceea400           mov ecx, 0xa4ee6c
// 008914c6  e8051ee0ff           call 0x6932d0
// 008914cb  6840c48900           push 0x89c440
// 008914d0  e82686e8ff           call 0x719afb
// 008914d5  59                   pop ecx
// 008914d6  c3                   ret 

extern int g_008914b0_0;
extern int g_008914b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008914b0(void*);
struct O_008914b0 { int m(void*, void*, int, int); };
extern O_008914b0 g_obj_008914b0;
extern int g_tail_008914b0;
void func_008914b0()
{
    g_obj_008914b0.m((void*)&g_008914b0_0, (void*)&g_008914b0_1, 404, 7);
    tail_fn_008914b0(&g_tail_008914b0);
}