// from server: 100% by colin
// roc 2009-06 00887eb0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887eb0
//
// 00887eb0  6a07                 push 7
// 00887eb2  68c8000000           push 0xc8
// 00887eb7  68305d8c00           push 0x8c5d30
// 00887ebc  68505e8c00           push 0x8c5e50
// 00887ec1  b99ceda300           mov ecx, 0xa3ed9c
// 00887ec6  e875d5c4ff           call 0x4d5440
// 00887ecb  68905c8900           push 0x895c90
// 00887ed0  e8261ce9ff           call 0x719afb
// 00887ed5  59                   pop ecx
// 00887ed6  c3                   ret 

extern int g_00887eb0_0;
extern int g_00887eb0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887eb0(void*);
struct O_00887eb0 { int m(void*, void*, int, int); };
extern O_00887eb0 g_obj_00887eb0;
extern int g_tail_00887eb0;
void func_00887eb0()
{
    g_obj_00887eb0.m((void*)&g_00887eb0_0, (void*)&g_00887eb0_1, 200, 7);
    tail_fn_00887eb0(&g_tail_00887eb0);
}