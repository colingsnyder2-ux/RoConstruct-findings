// from server: 100% by colin
// roc 2010-06 009c7030  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7030
//
// 009c7030  6a01                 push 1
// 009c7032  6a00                 push 0
// 009c7034  689896a100           push 0xa19698
// 009c7039  684c97a100           push 0xa1974c
// 009c703e  6870010000           push 0x170
// 009c7043  b9ec4dc000           mov ecx, 0xc04dec
// 009c7048  e89342b0ff           call 0x4cb2e0
// 009c704d  68a0cd9d00           push 0x9dcda0
// 009c7052  e80c1adeff           call 0x7a8a63
// 009c7057  59                   pop ecx
// 009c7058  c3                   ret 

extern int g_009c7030_1;
extern int g_009c7030_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c7030(void*);
struct O_009c7030 { int m(int, void*, void*, int, int); };
extern O_009c7030 g_obj_009c7030;
extern int g_tail_009c7030;
void func_009c7030()
{
    g_obj_009c7030.m(368, (void*)&g_009c7030_1, (void*)&g_009c7030_2, 0, 1);
    tail_fn_009c7030(&g_tail_009c7030);
}