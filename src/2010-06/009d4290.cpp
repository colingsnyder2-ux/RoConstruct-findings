// from server: 100% by colin
// roc 2010-06 009d4290  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4290
//
// 009d4290  6a00                 push 0
// 009d4292  6a0f                 push 0xf
// 009d4294  6834010000           push 0x134
// 009d4299  68d403a300           push 0xa303d4
// 009d429e  68c4f5a300           push 0xa3f5c4
// 009d42a3  b974e9c100           mov ecx, 0xc1e974
// 009d42a8  e80379ccff           call 0x69bbb0
// 009d42ad  68a0599e00           push 0x9e59a0
// 009d42b2  e8ac47ddff           call 0x7a8a63
// 009d42b7  59                   pop ecx
// 009d42b8  c3                   ret 

extern int g_009d4290_0;
extern int g_009d4290_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4290(void*);
struct O_009d4290 { int m(void*, void*, int, int, int); };
extern O_009d4290 g_obj_009d4290;
extern int g_tail_009d4290;
void func_009d4290()
{
    g_obj_009d4290.m((void*)&g_009d4290_0, (void*)&g_009d4290_1, 308, 15, 0);
    tail_fn_009d4290(&g_tail_009d4290);
}