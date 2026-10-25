// from server: 100% by colin
// roc 2010-06 009cea40  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cea40
//
// 009cea40  6a01                 push 1
// 009cea42  6a00                 push 0
// 009cea44  68f4fea200           push 0xa2fef4
// 009cea49  68e8fea200           push 0xa2fee8
// 009cea4e  6868010000           push 0x168
// 009cea53  b9a498c100           mov ecx, 0xc198a4
// 009cea58  e8738fc2ff           call 0x5f79d0
// 009cea5d  68c0289e00           push 0x9e28c0
// 009cea62  e8fc9fddff           call 0x7a8a63
// 009cea67  59                   pop ecx
// 009cea68  c3                   ret 

extern int g_009cea40_1;
extern int g_009cea40_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009cea40(void*);
struct O_009cea40 { int m(int, void*, void*, int, int); };
extern O_009cea40 g_obj_009cea40;
extern int g_tail_009cea40;
void func_009cea40()
{
    g_obj_009cea40.m(360, (void*)&g_009cea40_1, (void*)&g_009cea40_2, 0, 1);
    tail_fn_009cea40(&g_tail_009cea40);
}