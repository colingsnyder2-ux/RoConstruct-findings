// from server: 100% by colin
// roc 2009-06 00887f50  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887f50
//
// 00887f50  6a07                 push 7
// 00887f52  688e000000           push 0x8e
// 00887f57  68845e8c00           push 0x8c5e84
// 00887f5c  68905e8c00           push 0x8c5e90
// 00887f61  b930eca300           mov ecx, 0xa3ec30
// 00887f66  e845d6c4ff           call 0x4d55b0
// 00887f6b  68d05c8900           push 0x895cd0
// 00887f70  e8861be9ff           call 0x719afb
// 00887f75  59                   pop ecx
// 00887f76  c3                   ret 

extern int g_00887f50_0;
extern int g_00887f50_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887f50(void*);
struct O_00887f50 { int m(void*, void*, int, int); };
extern O_00887f50 g_obj_00887f50;
extern int g_tail_00887f50;
void func_00887f50()
{
    g_obj_00887f50.m((void*)&g_00887f50_0, (void*)&g_00887f50_1, 142, 7);
    tail_fn_00887f50(&g_tail_00887f50);
}