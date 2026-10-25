// from server: 100% by colin
// roc 2010-06 009cf300  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cf300
//
// 009cf300  6a02                 push 2
// 009cf302  6a09                 push 9
// 009cf304  6828010000           push 0x128
// 009cf309  6828b8a000           push 0xa0b828
// 009cf30e  68c81aa300           push 0xa31ac8
// 009cf313  b9909ec100           mov ecx, 0xc19e90
// 009cf318  e85332c4ff           call 0x612570
// 009cf31d  68702d9e00           push 0x9e2d70
// 009cf322  e83c97ddff           call 0x7a8a63
// 009cf327  59                   pop ecx
// 009cf328  c3                   ret 

extern int g_009cf300_0;
extern int g_009cf300_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009cf300(void*);
struct O_009cf300 { int m(void*, void*, int, int, int); };
extern O_009cf300 g_obj_009cf300;
extern int g_tail_009cf300;
void func_009cf300()
{
    g_obj_009cf300.m((void*)&g_009cf300_0, (void*)&g_009cf300_1, 296, 9, 2);
    tail_fn_009cf300(&g_tail_009cf300);
}