// from server: 100% by colin
// roc 2010-06 009d5900  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5900
//
// 009d5900  6a00                 push 0
// 009d5902  6a0f                 push 0xf
// 009d5904  6864010000           push 0x164
// 009d5909  68f429a400           push 0xa429f4
// 009d590e  68b4e9a200           push 0xa2e9b4
// 009d5913  b980f7c100           mov ecx, 0xc1f780
// 009d5918  e8d328ceff           call 0x6b81f0
// 009d591d  68d0669e00           push 0x9e66d0
// 009d5922  e83c31ddff           call 0x7a8a63
// 009d5927  59                   pop ecx
// 009d5928  c3                   ret 

extern int g_009d5900_0;
extern int g_009d5900_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5900(void*);
struct O_009d5900 { int m(void*, void*, int, int, int); };
extern O_009d5900 g_obj_009d5900;
extern int g_tail_009d5900;
void func_009d5900()
{
    g_obj_009d5900.m((void*)&g_009d5900_0, (void*)&g_009d5900_1, 356, 15, 0);
    tail_fn_009d5900(&g_tail_009d5900);
}