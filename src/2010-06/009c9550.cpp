// from server: 100% by colin
// roc 2010-06 009c9550  unit: seg_009c0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c9550
//
// 009c9550  6a00                 push 0
// 009c9552  6a0f                 push 0xf
// 009c9554  6a74                 push 0x74
// 009c9556  68609ea200           push 0xa29e60
// 009c955b  68549ea200           push 0xa29e54
// 009c9560  b968b5c000           mov ecx, 0xc0b568
// 009c9565  e826cabcff           call 0x595f90
// 009c956a  6830ea9d00           push 0x9dea30
// 009c956f  e8eff4ddff           call 0x7a8a63
// 009c9574  59                   pop ecx
// 009c9575  c3                   ret 

extern int g_009c9550_0;
extern int g_009c9550_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c9550(void*);
struct O_009c9550 { int m(void*, void*, int, int, int); };
extern O_009c9550 g_obj_009c9550;
extern int g_tail_009c9550;
void func_009c9550()
{
    g_obj_009c9550.m((void*)&g_009c9550_0, (void*)&g_009c9550_1, 116, 15, 0);
    tail_fn_009c9550(&g_tail_009c9550);
}