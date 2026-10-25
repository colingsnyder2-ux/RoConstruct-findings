// from server: 100% by colin
// roc 2010-06 009cd9f0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cd9f0
//
// 009cd9f0  6a01                 push 1
// 009cd9f2  6a00                 push 0
// 009cd9f4  68b0cca200           push 0xa2ccb0
// 009cd9f9  68cccca200           push 0xa2cccc
// 009cd9fe  68d0000000           push 0xd0
// 009cda03  b9c888c100           mov ecx, 0xc188c8
// 009cda08  e883e0bfff           call 0x5cba90
// 009cda0d  6820219e00           push 0x9e2120
// 009cda12  e84cb0ddff           call 0x7a8a63
// 009cda17  59                   pop ecx
// 009cda18  c3                   ret 

extern int g_009cd9f0_1;
extern int g_009cd9f0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009cd9f0(void*);
struct O_009cd9f0 { int m(int, void*, void*, int, int); };
extern O_009cd9f0 g_obj_009cd9f0;
extern int g_tail_009cd9f0;
void func_009cd9f0()
{
    g_obj_009cd9f0.m(208, (void*)&g_009cd9f0_1, (void*)&g_009cd9f0_2, 0, 1);
    tail_fn_009cd9f0(&g_tail_009cd9f0);
}