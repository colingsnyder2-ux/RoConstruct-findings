// from server: 100% by colin
// roc 2010-06 009d0110  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d0110
//
// 009d0110  6a00                 push 0
// 009d0112  6a0f                 push 0xf
// 009d0114  6898000000           push 0x98
// 009d0119  683c60a300           push 0xa3603c
// 009d011e  683060a300           push 0xa36030
// 009d0123  b990aec100           mov ecx, 0xc1ae90
// 009d0128  e82322c6ff           call 0x632350
// 009d012d  6810369e00           push 0x9e3610
// 009d0132  e82c89ddff           call 0x7a8a63
// 009d0137  59                   pop ecx
// 009d0138  c3                   ret 

extern int g_009d0110_0;
extern int g_009d0110_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d0110(void*);
struct O_009d0110 { int m(void*, void*, int, int, int); };
extern O_009d0110 g_obj_009d0110;
extern int g_tail_009d0110;
void func_009d0110()
{
    g_obj_009d0110.m((void*)&g_009d0110_0, (void*)&g_009d0110_1, 152, 15, 0);
    tail_fn_009d0110(&g_tail_009d0110);
}