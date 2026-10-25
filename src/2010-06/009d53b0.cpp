// from server: 100% by colin
// roc 2010-06 009d53b0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d53b0
//
// 009d53b0  6a00                 push 0
// 009d53b2  6a0f                 push 0xf
// 009d53b4  688c010000           push 0x18c
// 009d53b9  68282aa400           push 0xa42a28
// 009d53be  68442aa400           push 0xa42a44
// 009d53c3  b948f8c100           mov ecx, 0xc1f848
// 009d53c8  e86324ceff           call 0x6b7830
// 009d53cd  6870649e00           push 0x9e6470
// 009d53d2  e88c36ddff           call 0x7a8a63
// 009d53d7  59                   pop ecx
// 009d53d8  c3                   ret 

extern int g_009d53b0_0;
extern int g_009d53b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d53b0(void*);
struct O_009d53b0 { int m(void*, void*, int, int, int); };
extern O_009d53b0 g_obj_009d53b0;
extern int g_tail_009d53b0;
void func_009d53b0()
{
    g_obj_009d53b0.m((void*)&g_009d53b0_0, (void*)&g_009d53b0_1, 396, 15, 0);
    tail_fn_009d53b0(&g_tail_009d53b0);
}