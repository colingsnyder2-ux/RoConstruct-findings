// from server: 100% by colin
// roc 2010-06 009d47e0  unit: seg_009d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d47e0
//
// 009d47e0  6a0f                 push 0xf
// 009d47e2  6800897100           push 0x718900
// 009d47e7  6890877100           push 0x718790
// 009d47ec  680c03a400           push 0xa4030c
// 009d47f1  68fc03a400           push 0xa403fc
// 009d47f6  b9c8edc100           mov ecx, 0xc1edc8
// 009d47fb  e8509eccff           call 0x69e650
// 009d4800  68c05c9e00           push 0x9e5cc0
// 009d4805  e85942ddff           call 0x7a8a63
// 009d480a  59                   pop ecx
// 009d480b  c3                   ret 

extern int g_009d47e0_0;
extern int g_009d47e0_1;
extern int g_009d47e0_2;
extern int g_009d47e0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d47e0(void*);
struct O_009d47e0 { int m(void*, void*, void*, void*, int); };
extern O_009d47e0 g_obj_009d47e0;
extern int g_tail_009d47e0;
void func_009d47e0()
{
    g_obj_009d47e0.m((void*)&g_009d47e0_0, (void*)&g_009d47e0_1, (void*)&g_009d47e0_2, (void*)&g_009d47e0_3, 15);
    tail_fn_009d47e0(&g_tail_009d47e0);
}