// from server: 100% by colin
// roc 2010-06 009c9420  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c9420
//
// 009c9420  6a00                 push 0
// 009c9422  6a0f                 push 0xf
// 009c9424  68a6000000           push 0xa6
// 009c9429  68449aa200           push 0xa29a44
// 009c942e  68709aa200           push 0xa29a70
// 009c9433  b9ecaac000           mov ecx, 0xc0aaec
// 009c9438  e8137fbcff           call 0x591350
// 009c943d  6860e69d00           push 0x9de660
// 009c9442  e81cf6ddff           call 0x7a8a63
// 009c9447  59                   pop ecx
// 009c9448  c3                   ret 

extern int g_009c9420_0;
extern int g_009c9420_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c9420(void*);
struct O_009c9420 { int m(void*, void*, int, int, int); };
extern O_009c9420 g_obj_009c9420;
extern int g_tail_009c9420;
void func_009c9420()
{
    g_obj_009c9420.m((void*)&g_009c9420_0, (void*)&g_009c9420_1, 166, 15, 0);
    tail_fn_009c9420(&g_tail_009c9420);
}