// from server: 100% by colin
// roc 2010-06 009c7740  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7740
//
// 009c7740  6a00                 push 0
// 009c7742  6a0f                 push 0xf
// 009c7744  68cc000000           push 0xcc
// 009c7749  6830a2a100           push 0xa1a230
// 009c774e  6860a3a100           push 0xa1a360
// 009c7753  b9c460c000           mov ecx, 0xc060c4
// 009c7758  e8e3f4b0ff           call 0x4d6c40
// 009c775d  68c0d29d00           push 0x9dd2c0
// 009c7762  e8fc12deff           call 0x7a8a63
// 009c7767  59                   pop ecx
// 009c7768  c3                   ret 

extern int g_009c7740_0;
extern int g_009c7740_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c7740(void*);
struct O_009c7740 { int m(void*, void*, int, int, int); };
extern O_009c7740 g_obj_009c7740;
extern int g_tail_009c7740;
void func_009c7740()
{
    g_obj_009c7740.m((void*)&g_009c7740_0, (void*)&g_009c7740_1, 204, 15, 0);
    tail_fn_009c7740(&g_tail_009c7740);
}