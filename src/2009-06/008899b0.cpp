// from server: 100% by colin
// roc 2009-06 008899b0  unit: seg_00880000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008899b0
//
// 008899b0  6a07                 push 7
// 008899b2  6a70                 push 0x70
// 008899b4  68d0508d00           push 0x8d50d0
// 008899b9  68c4508d00           push 0x8d50c4
// 008899be  b9f43da400           mov ecx, 0xa43df4
// 008899c3  e8c857d4ff           call 0x5cf190
// 008899c8  68d0728900           push 0x8972d0
// 008899cd  e82901e9ff           call 0x719afb
// 008899d2  59                   pop ecx
// 008899d3  c3                   ret 

extern int g_008899b0_0;
extern int g_008899b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008899b0(void*);
struct O_008899b0 { int m(void*, void*, int, int); };
extern O_008899b0 g_obj_008899b0;
extern int g_tail_008899b0;
void func_008899b0()
{
    g_obj_008899b0.m((void*)&g_008899b0_0, (void*)&g_008899b0_1, 112, 7);
    tail_fn_008899b0(&g_tail_008899b0);
}