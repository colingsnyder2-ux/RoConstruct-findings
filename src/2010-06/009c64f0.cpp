// from server: 100% by colin
// roc 2010-06 009c64f0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c64f0
//
// 009c64f0  6a01                 push 1
// 009c64f2  6a00                 push 0
// 009c64f4  68208fa100           push 0xa18f20
// 009c64f9  682c8fa100           push 0xa18f2c
// 009c64fe  6828010000           push 0x128
// 009c6503  b9b848c000           mov ecx, 0xc048b8
// 009c6508  e88314afff           call 0x4b7990
// 009c650d  6830c39d00           push 0x9dc330
// 009c6512  e84c25deff           call 0x7a8a63
// 009c6517  59                   pop ecx
// 009c6518  c3                   ret 

extern int g_009c64f0_1;
extern int g_009c64f0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c64f0(void*);
struct O_009c64f0 { int m(int, void*, void*, int, int); };
extern O_009c64f0 g_obj_009c64f0;
extern int g_tail_009c64f0;
void func_009c64f0()
{
    g_obj_009c64f0.m(296, (void*)&g_009c64f0_1, (void*)&g_009c64f0_2, 0, 1);
    tail_fn_009c64f0(&g_tail_009c64f0);
}