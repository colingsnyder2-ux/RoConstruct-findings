// from server: 100% by colin
// roc 2010-06 009d5b30  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5b30
//
// 009d5b30  6a00                 push 0
// 009d5b32  6a0f                 push 0xf
// 009d5b34  689c000000           push 0x9c
// 009d5b39  685c8ea100           push 0xa18e5c
// 009d5b3e  689032a400           push 0xa43290
// 009d5b43  b970fbc100           mov ecx, 0xc1fb70
// 009d5b48  e88379ceff           call 0x6bd4d0
// 009d5b4d  68906a9e00           push 0x9e6a90
// 009d5b52  e80c2fddff           call 0x7a8a63
// 009d5b57  59                   pop ecx
// 009d5b58  c3                   ret 

extern int g_009d5b30_0;
extern int g_009d5b30_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5b30(void*);
struct O_009d5b30 { int m(void*, void*, int, int, int); };
extern O_009d5b30 g_obj_009d5b30;
extern int g_tail_009d5b30;
void func_009d5b30()
{
    g_obj_009d5b30.m((void*)&g_009d5b30_0, (void*)&g_009d5b30_1, 156, 15, 0);
    tail_fn_009d5b30(&g_tail_009d5b30);
}