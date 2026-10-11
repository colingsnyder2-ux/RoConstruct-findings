// from server: 100% by colin
// roc 2009-06 00887c10  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887c10
//
// 00887c10  6a07                 push 7
// 00887c12  6818010000           push 0x118
// 00887c17  681c598c00           push 0x8c591c
// 00887c1c  6814598c00           push 0x8c5914
// 00887c21  b96ceba300           mov ecx, 0xa3eb6c
// 00887c26  e8b59cc4ff           call 0x4d18e0
// 00887c2b  68005a8900           push 0x895a00
// 00887c30  e8c61ee9ff           call 0x719afb
// 00887c35  59                   pop ecx
// 00887c36  c3                   ret 

extern int g_00887c10_0;
extern int g_00887c10_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887c10(void*);
struct O_00887c10 { int m(void*, void*, int, int); };
extern O_00887c10 g_obj_00887c10;
extern int g_tail_00887c10;
void func_00887c10()
{
    g_obj_00887c10.m((void*)&g_00887c10_0, (void*)&g_00887c10_1, 280, 7);
    tail_fn_00887c10(&g_tail_00887c10);
}