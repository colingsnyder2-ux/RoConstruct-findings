// from server: 100% by colin
// roc 2010-06 009ceb10  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ceb10
//
// 009ceb10  6a00                 push 0
// 009ceb12  6a02                 push 2
// 009ceb14  6878010000           push 0x178
// 009ceb19  6840ffa200           push 0xa2ff40
// 009ceb1e  681cffa200           push 0xa2ff1c
// 009ceb23  b98498c100           mov ecx, 0xc19884
// 009ceb28  e87382c2ff           call 0x5f6da0
// 009ceb2d  6860289e00           push 0x9e2860
// 009ceb32  e82c9fddff           call 0x7a8a63
// 009ceb37  59                   pop ecx
// 009ceb38  c3                   ret 

extern int g_009ceb10_0;
extern int g_009ceb10_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009ceb10(void*);
struct O_009ceb10 { int m(void*, void*, int, int, int); };
extern O_009ceb10 g_obj_009ceb10;
extern int g_tail_009ceb10;
void func_009ceb10()
{
    g_obj_009ceb10.m((void*)&g_009ceb10_0, (void*)&g_009ceb10_1, 376, 2, 0);
    tail_fn_009ceb10(&g_tail_009ceb10);
}