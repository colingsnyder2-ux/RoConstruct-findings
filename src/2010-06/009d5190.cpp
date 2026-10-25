// from server: 100% by colin
// roc 2010-06 009d5190  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5190
//
// 009d5190  6a00                 push 0
// 009d5192  6a0f                 push 0xf
// 009d5194  68a8000000           push 0xa8
// 009d5199  685c8ea100           push 0xa18e5c
// 009d519e  68fc16a400           push 0xa416fc
// 009d51a3  b9fcf2c100           mov ecx, 0xc1f2fc
// 009d51a8  e8f38ccdff           call 0x6adea0
// 009d51ad  68705f9e00           push 0x9e5f70
// 009d51b2  e8ac38ddff           call 0x7a8a63
// 009d51b7  59                   pop ecx
// 009d51b8  c3                   ret 

extern int g_009d5190_0;
extern int g_009d5190_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5190(void*);
struct O_009d5190 { int m(void*, void*, int, int, int); };
extern O_009d5190 g_obj_009d5190;
extern int g_tail_009d5190;
void func_009d5190()
{
    g_obj_009d5190.m((void*)&g_009d5190_0, (void*)&g_009d5190_1, 168, 15, 0);
    tail_fn_009d5190(&g_tail_009d5190);
}