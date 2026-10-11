// from server: 100% by colin
// roc 2009-06 00887dc0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887dc0
//
// 00887dc0  6a07                 push 7
// 00887dc2  68b0000000           push 0xb0
// 00887dc7  68305d8c00           push 0x8c5d30
// 00887dcc  68f05d8c00           push 0x8c5df0
// 00887dd1  b9dceba300           mov ecx, 0xa3ebdc
// 00887dd6  e8c5d4c4ff           call 0x4d52a0
// 00887ddb  68105c8900           push 0x895c10
// 00887de0  e8161de9ff           call 0x719afb
// 00887de5  59                   pop ecx
// 00887de6  c3                   ret 

extern int g_00887dc0_0;
extern int g_00887dc0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887dc0(void*);
struct O_00887dc0 { int m(void*, void*, int, int); };
extern O_00887dc0 g_obj_00887dc0;
extern int g_tail_00887dc0;
void func_00887dc0()
{
    g_obj_00887dc0.m((void*)&g_00887dc0_0, (void*)&g_00887dc0_1, 176, 7);
    tail_fn_00887dc0(&g_tail_00887dc0);
}