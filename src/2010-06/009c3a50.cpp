// from server: 100% by colin
// roc 2010-06 009c3a50  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c3a50
//
// 009c3a50  6a00                 push 0
// 009c3a52  6a0f                 push 0xf
// 009c3a54  6834010000           push 0x134
// 009c3a59  6828b8a000           push 0xa0b828
// 009c3a5e  6834b8a000           push 0xa0b834
// 009c3a63  b9f014c000           mov ecx, 0xc014f0
// 009c3a68  e8835ba8ff           call 0x4495f0
// 009c3a6d  68d0b59d00           push 0x9db5d0
// 009c3a72  e8ec4fdeff           call 0x7a8a63
// 009c3a77  59                   pop ecx
// 009c3a78  c3                   ret 

extern int g_009c3a50_0;
extern int g_009c3a50_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c3a50(void*);
struct O_009c3a50 { int m(void*, void*, int, int, int); };
extern O_009c3a50 g_obj_009c3a50;
extern int g_tail_009c3a50;
void func_009c3a50()
{
    g_obj_009c3a50.m((void*)&g_009c3a50_0, (void*)&g_009c3a50_1, 308, 15, 0);
    tail_fn_009c3a50(&g_tail_009c3a50);
}