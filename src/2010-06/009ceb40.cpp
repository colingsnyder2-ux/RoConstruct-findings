// from server: 100% by colin
// roc 2010-06 009ceb40  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ceb40
//
// 009ceb40  6a00                 push 0
// 009ceb42  6a02                 push 2
// 009ceb44  68a0010000           push 0x1a0
// 009ceb49  6840ffa200           push 0xa2ff40
// 009ceb4e  6850ffa200           push 0xa2ff50
// 009ceb53  b99497c100           mov ecx, 0xc19794
// 009ceb58  e84382c2ff           call 0x5f6da0
// 009ceb5d  6800289e00           push 0x9e2800
// 009ceb62  e8fc9eddff           call 0x7a8a63
// 009ceb67  59                   pop ecx
// 009ceb68  c3                   ret 

extern int g_009ceb40_0;
extern int g_009ceb40_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009ceb40(void*);
struct O_009ceb40 { int m(void*, void*, int, int, int); };
extern O_009ceb40 g_obj_009ceb40;
extern int g_tail_009ceb40;
void func_009ceb40()
{
    g_obj_009ceb40.m((void*)&g_009ceb40_0, (void*)&g_009ceb40_1, 416, 2, 0);
    tail_fn_009ceb40(&g_tail_009ceb40);
}