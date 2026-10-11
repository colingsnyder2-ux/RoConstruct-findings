// from server: 100% by colin
// roc 2009-06 00887f80  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887f80
//
// 00887f80  6a07                 push 7
// 00887f82  688c000000           push 0x8c
// 00887f87  68845e8c00           push 0x8c5e84
// 00887f8c  68a05e8c00           push 0x8c5ea0
// 00887f91  b960eda300           mov ecx, 0xa3ed60
// 00887f96  e815d6c4ff           call 0x4d55b0
// 00887f9b  68505b8900           push 0x895b50
// 00887fa0  e8561be9ff           call 0x719afb
// 00887fa5  59                   pop ecx
// 00887fa6  c3                   ret 

extern int g_00887f80_0;
extern int g_00887f80_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887f80(void*);
struct O_00887f80 { int m(void*, void*, int, int); };
extern O_00887f80 g_obj_00887f80;
extern int g_tail_00887f80;
void func_00887f80()
{
    g_obj_00887f80.m((void*)&g_00887f80_0, (void*)&g_00887f80_1, 140, 7);
    tail_fn_00887f80(&g_tail_00887f80);
}