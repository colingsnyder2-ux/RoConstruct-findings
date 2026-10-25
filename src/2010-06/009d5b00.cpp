// from server: 100% by colin
// roc 2010-06 009d5b00  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5b00
//
// 009d5b00  6a00                 push 0
// 009d5b02  6a0f                 push 0xf
// 009d5b04  6898000000           push 0x98
// 009d5b09  685c8ea100           push 0xa18e5c
// 009d5b0e  688032a400           push 0xa43280
// 009d5b13  b9b4fbc100           mov ecx, 0xc1fbb4
// 009d5b18  e8b379ceff           call 0x6bd4d0
// 009d5b1d  68b06a9e00           push 0x9e6ab0
// 009d5b22  e83c2fddff           call 0x7a8a63
// 009d5b27  59                   pop ecx
// 009d5b28  c3                   ret 

extern int g_009d5b00_0;
extern int g_009d5b00_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5b00(void*);
struct O_009d5b00 { int m(void*, void*, int, int, int); };
extern O_009d5b00 g_obj_009d5b00;
extern int g_tail_009d5b00;
void func_009d5b00()
{
    g_obj_009d5b00.m((void*)&g_009d5b00_0, (void*)&g_009d5b00_1, 152, 15, 0);
    tail_fn_009d5b00(&g_tail_009d5b00);
}