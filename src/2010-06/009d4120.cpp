// from server: 100% by colin
// roc 2010-06 009d4120  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4120
//
// 009d4120  6a01                 push 1
// 009d4122  6a00                 push 0
// 009d4124  68002fa100           push 0xa12f00
// 009d4129  6834f2a300           push 0xa3f234
// 009d412e  68d4000000           push 0xd4
// 009d4133  b948e8c100           mov ecx, 0xc1e848
// 009d4138  e8e350ccff           call 0x699220
// 009d413d  6800599e00           push 0x9e5900
// 009d4142  e81c49ddff           call 0x7a8a63
// 009d4147  59                   pop ecx
// 009d4148  c3                   ret 

extern int g_009d4120_1;
extern int g_009d4120_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4120(void*);
struct O_009d4120 { int m(int, void*, void*, int, int); };
extern O_009d4120 g_obj_009d4120;
extern int g_tail_009d4120;
void func_009d4120()
{
    g_obj_009d4120.m(212, (void*)&g_009d4120_1, (void*)&g_009d4120_2, 0, 1);
    tail_fn_009d4120(&g_tail_009d4120);
}