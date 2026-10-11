// from server: 100% by colin
// roc 2009-06 008916d0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008916d0
//
// 008916d0  6a07                 push 7
// 008916d2  6858010000           push 0x158
// 008916d7  689c788e00           push 0x8e789c
// 008916dc  685c798e00           push 0x8e795c
// 008916e1  b918f1a400           mov ecx, 0xa4f118
// 008916e6  e8f51fe0ff           call 0x6936e0
// 008916eb  6820c58900           push 0x89c520
// 008916f0  e80684e8ff           call 0x719afb
// 008916f5  59                   pop ecx
// 008916f6  c3                   ret 

extern int g_008916d0_0;
extern int g_008916d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008916d0(void*);
struct O_008916d0 { int m(void*, void*, int, int); };
extern O_008916d0 g_obj_008916d0;
extern int g_tail_008916d0;
void func_008916d0()
{
    g_obj_008916d0.m((void*)&g_008916d0_0, (void*)&g_008916d0_1, 344, 7);
    tail_fn_008916d0(&g_tail_008916d0);
}