// from server: 100% by colin
// roc 2010-06 009d4720  unit: seg_009d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4720
//
// 009d4720  6a0f                 push 0xf
// 009d4722  6800897100           push 0x718900
// 009d4727  6890877100           push 0x718790
// 009d472c  680c03a400           push 0xa4030c
// 009d4731  68c003a400           push 0xa403c0
// 009d4736  b9e4ecc100           mov ecx, 0xc1ece4
// 009d473b  e8b09dccff           call 0x69e4f0
// 009d4740  68405c9e00           push 0x9e5c40
// 009d4745  e81943ddff           call 0x7a8a63
// 009d474a  59                   pop ecx
// 009d474b  c3                   ret 

extern int g_009d4720_0;
extern int g_009d4720_1;
extern int g_009d4720_2;
extern int g_009d4720_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4720(void*);
struct O_009d4720 { int m(void*, void*, void*, void*, int); };
extern O_009d4720 g_obj_009d4720;
extern int g_tail_009d4720;
void func_009d4720()
{
    g_obj_009d4720.m((void*)&g_009d4720_0, (void*)&g_009d4720_1, (void*)&g_009d4720_2, (void*)&g_009d4720_3, 15);
    tail_fn_009d4720(&g_tail_009d4720);
}