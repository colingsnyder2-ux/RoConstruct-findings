// from server: 100% by colin
// roc 2009-06 008870a0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008870a0
//
// 008870a0  6a02                 push 2
// 008870a2  68cc000000           push 0xcc
// 008870a7  68584e8c00           push 0x8c4e58
// 008870ac  688c4e8c00           push 0x8c4e8c
// 008870b1  b9ecdaa300           mov ecx, 0xa3daec
// 008870b6  e86541c3ff           call 0x4bb220
// 008870bb  6850508900           push 0x895050
// 008870c0  e8362ae9ff           call 0x719afb
// 008870c5  59                   pop ecx
// 008870c6  c3                   ret 

extern int g_008870a0_0;
extern int g_008870a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008870a0(void*);
struct O_008870a0 { int m(void*, void*, int, int); };
extern O_008870a0 g_obj_008870a0;
extern int g_tail_008870a0;
void func_008870a0()
{
    g_obj_008870a0.m((void*)&g_008870a0_0, (void*)&g_008870a0_1, 204, 2);
    tail_fn_008870a0(&g_tail_008870a0);
}