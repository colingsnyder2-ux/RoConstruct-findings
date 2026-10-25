// from server: 100% by colin
// roc 2010-06 009d4200  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4200
//
// 009d4200  6a00                 push 0
// 009d4202  6a0f                 push 0xf
// 009d4204  68d4000000           push 0xd4
// 009d4209  68d403a300           push 0xa303d4
// 009d420e  68a0f5a300           push 0xa3f5a0
// 009d4213  b9b4e9c100           mov ecx, 0xc1e9b4
// 009d4218  e89379ccff           call 0x69bbb0
// 009d421d  6840599e00           push 0x9e5940
// 009d4222  e83c48ddff           call 0x7a8a63
// 009d4227  59                   pop ecx
// 009d4228  c3                   ret 

extern int g_009d4200_0;
extern int g_009d4200_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4200(void*);
struct O_009d4200 { int m(void*, void*, int, int, int); };
extern O_009d4200 g_obj_009d4200;
extern int g_tail_009d4200;
void func_009d4200()
{
    g_obj_009d4200.m((void*)&g_009d4200_0, (void*)&g_009d4200_1, 212, 15, 0);
    tail_fn_009d4200(&g_tail_009d4200);
}