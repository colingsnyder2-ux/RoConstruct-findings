// from server: 100% by colin
// roc 2010-06 009d4260  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4260
//
// 009d4260  6a00                 push 0
// 009d4262  6a0f                 push 0xf
// 009d4264  6814010000           push 0x114
// 009d4269  68d403a300           push 0xa303d4
// 009d426e  68b8f5a300           push 0xa3f5b8
// 009d4273  b9e0e9c100           mov ecx, 0xc1e9e0
// 009d4278  e83379ccff           call 0x69bbb0
// 009d427d  6880599e00           push 0x9e5980
// 009d4282  e8dc47ddff           call 0x7a8a63
// 009d4287  59                   pop ecx
// 009d4288  c3                   ret 

extern int g_009d4260_0;
extern int g_009d4260_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4260(void*);
struct O_009d4260 { int m(void*, void*, int, int, int); };
extern O_009d4260 g_obj_009d4260;
extern int g_tail_009d4260;
void func_009d4260()
{
    g_obj_009d4260.m((void*)&g_009d4260_0, (void*)&g_009d4260_1, 276, 15, 0);
    tail_fn_009d4260(&g_tail_009d4260);
}