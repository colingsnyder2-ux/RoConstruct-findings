// from server: 100% by colin
// roc 2010-06 009d5690  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5690
//
// 009d5690  6a00                 push 0
// 009d5692  6a0f                 push 0xf
// 009d5694  686c010000           push 0x16c
// 009d5699  68f429a400           push 0xa429f4
// 009d569e  68988fa100           push 0xa18f98
// 009d56a3  b9a0f5c100           mov ecx, 0xc1f5a0
// 009d56a8  e86326ceff           call 0x6b7d10
// 009d56ad  68b0659e00           push 0x9e65b0
// 009d56b2  e8ac33ddff           call 0x7a8a63
// 009d56b7  59                   pop ecx
// 009d56b8  c3                   ret 

extern int g_009d5690_0;
extern int g_009d5690_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5690(void*);
struct O_009d5690 { int m(void*, void*, int, int, int); };
extern O_009d5690 g_obj_009d5690;
extern int g_tail_009d5690;
void func_009d5690()
{
    g_obj_009d5690.m((void*)&g_009d5690_0, (void*)&g_009d5690_1, 364, 15, 0);
    tail_fn_009d5690(&g_tail_009d5690);
}