// from server: 100% by colin
// roc 2010-06 009d0270  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d0270
//
// 009d0270  6a00                 push 0
// 009d0272  6a0f                 push 0xf
// 009d0274  68c4000000           push 0xc4
// 009d0279  685c8ea100           push 0xa18e5c
// 009d027e  686463a300           push 0xa36364
// 009d0283  b98cafc100           mov ecx, 0xc1af8c
// 009d0288  e8e33ac6ff           call 0x633d70
// 009d028d  68c0369e00           push 0x9e36c0
// 009d0292  e8cc87ddff           call 0x7a8a63
// 009d0297  59                   pop ecx
// 009d0298  c3                   ret 

extern int g_009d0270_0;
extern int g_009d0270_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d0270(void*);
struct O_009d0270 { int m(void*, void*, int, int, int); };
extern O_009d0270 g_obj_009d0270;
extern int g_tail_009d0270;
void func_009d0270()
{
    g_obj_009d0270.m((void*)&g_009d0270_0, (void*)&g_009d0270_1, 196, 15, 0);
    tail_fn_009d0270(&g_tail_009d0270);
}