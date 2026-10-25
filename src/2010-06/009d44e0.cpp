// from server: 100% by colin
// roc 2010-06 009d44e0  unit: seg_009d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d44e0
//
// 009d44e0  6a0f                 push 0xf
// 009d44e2  6800897100           push 0x718900
// 009d44e7  6890877100           push 0x718790
// 009d44ec  680c03a400           push 0xa4030c
// 009d44f1  68fc02a400           push 0xa402fc
// 009d44f6  b974eac100           mov ecx, 0xc1ea74
// 009d44fb  e8c09accff           call 0x69dfc0
// 009d4500  68c05a9e00           push 0x9e5ac0
// 009d4505  e85945ddff           call 0x7a8a63
// 009d450a  59                   pop ecx
// 009d450b  c3                   ret 

extern int g_009d44e0_0;
extern int g_009d44e0_1;
extern int g_009d44e0_2;
extern int g_009d44e0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d44e0(void*);
struct O_009d44e0 { int m(void*, void*, void*, void*, int); };
extern O_009d44e0 g_obj_009d44e0;
extern int g_tail_009d44e0;
void func_009d44e0()
{
    g_obj_009d44e0.m((void*)&g_009d44e0_0, (void*)&g_009d44e0_1, (void*)&g_009d44e0_2, (void*)&g_009d44e0_3, 15);
    tail_fn_009d44e0(&g_tail_009d44e0);
}