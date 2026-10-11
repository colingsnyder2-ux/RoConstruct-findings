// from server: 100% by colin
// roc 2009-06 00887d90  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887d90
//
// 00887d90  6a07                 push 7
// 00887d92  68a4000000           push 0xa4
// 00887d97  68305d8c00           push 0x8c5d30
// 00887d9c  68dc5d8c00           push 0x8c5ddc
// 00887da1  b928eda300           mov ecx, 0xa3ed28
// 00887da6  e8f5d4c4ff           call 0x4d52a0
// 00887dab  68305c8900           push 0x895c30
// 00887db0  e8461de9ff           call 0x719afb
// 00887db5  59                   pop ecx
// 00887db6  c3                   ret 

extern int g_00887d90_0;
extern int g_00887d90_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887d90(void*);
struct O_00887d90 { int m(void*, void*, int, int); };
extern O_00887d90 g_obj_00887d90;
extern int g_tail_00887d90;
void func_00887d90()
{
    g_obj_00887d90.m((void*)&g_00887d90_0, (void*)&g_00887d90_1, 164, 7);
    tail_fn_00887d90(&g_tail_00887d90);
}