// from server: 100% by colin
// roc 2010-06 009c9160  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c9160
//
// 009c9160  6a00                 push 0
// 009c9162  6a0f                 push 0xf
// 009c9164  68a4000000           push 0xa4
// 009c9169  685c99a200           push 0xa2995c
// 009c916e  688099a200           push 0xa29980
// 009c9173  b924adc000           mov ecx, 0xc0ad24
// 009c9178  e8d381bcff           call 0x591350
// 009c917d  6820e69d00           push 0x9de620
// 009c9182  e8dcf8ddff           call 0x7a8a63
// 009c9187  59                   pop ecx
// 009c9188  c3                   ret 

extern int g_009c9160_0;
extern int g_009c9160_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c9160(void*);
struct O_009c9160 { int m(void*, void*, int, int, int); };
extern O_009c9160 g_obj_009c9160;
extern int g_tail_009c9160;
void func_009c9160()
{
    g_obj_009c9160.m((void*)&g_009c9160_0, (void*)&g_009c9160_1, 164, 15, 0);
    tail_fn_009c9160(&g_tail_009c9160);
}