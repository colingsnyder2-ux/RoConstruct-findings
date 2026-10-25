// from server: 100% by colin
// roc 2010-06 009d5160  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5160
//
// 009d5160  6a00                 push 0
// 009d5162  6a0f                 push 0xf
// 009d5164  68a0000000           push 0xa0
// 009d5169  685c8ea100           push 0xa18e5c
// 009d516e  68f016a400           push 0xa416f0
// 009d5173  b958f2c100           mov ecx, 0xc1f258
// 009d5178  e8238dcdff           call 0x6adea0
// 009d517d  68905f9e00           push 0x9e5f90
// 009d5182  e8dc38ddff           call 0x7a8a63
// 009d5187  59                   pop ecx
// 009d5188  c3                   ret 

extern int g_009d5160_0;
extern int g_009d5160_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5160(void*);
struct O_009d5160 { int m(void*, void*, int, int, int); };
extern O_009d5160 g_obj_009d5160;
extern int g_tail_009d5160;
void func_009d5160()
{
    g_obj_009d5160.m((void*)&g_009d5160_0, (void*)&g_009d5160_1, 160, 15, 0);
    tail_fn_009d5160(&g_tail_009d5160);
}