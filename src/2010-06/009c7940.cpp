// from server: 100% by colin
// roc 2010-06 009c7940  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7940
//
// 009c7940  6a00                 push 0
// 009c7942  6a0f                 push 0xf
// 009c7944  68c9000000           push 0xc9
// 009c7949  6830a2a100           push 0xa1a230
// 009c794e  6814a4a100           push 0xa1a414
// 009c7953  b96861c000           mov ecx, 0xc06168
// 009c7958  e863f7b0ff           call 0x4d70c0
// 009c795d  6860d39d00           push 0x9dd360
// 009c7962  e8fc10deff           call 0x7a8a63
// 009c7967  59                   pop ecx
// 009c7968  c3                   ret 

extern int g_009c7940_0;
extern int g_009c7940_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c7940(void*);
struct O_009c7940 { int m(void*, void*, int, int, int); };
extern O_009c7940 g_obj_009c7940;
extern int g_tail_009c7940;
void func_009c7940()
{
    g_obj_009c7940.m((void*)&g_009c7940_0, (void*)&g_009c7940_1, 201, 15, 0);
    tail_fn_009c7940(&g_tail_009c7940);
}