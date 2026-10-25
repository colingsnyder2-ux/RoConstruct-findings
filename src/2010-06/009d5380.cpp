// from server: 100% by colin
// roc 2010-06 009d5380  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5380
//
// 009d5380  6a00                 push 0
// 009d5382  6a0f                 push 0xf
// 009d5384  6888010000           push 0x188
// 009d5389  68282aa400           push 0xa42a28
// 009d538e  683c2aa400           push 0xa42a3c
// 009d5393  b968f8c100           mov ecx, 0xc1f868
// 009d5398  e89324ceff           call 0x6b7830
// 009d539d  6850649e00           push 0x9e6450
// 009d53a2  e8bc36ddff           call 0x7a8a63
// 009d53a7  59                   pop ecx
// 009d53a8  c3                   ret 

extern int g_009d5380_0;
extern int g_009d5380_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5380(void*);
struct O_009d5380 { int m(void*, void*, int, int, int); };
extern O_009d5380 g_obj_009d5380;
extern int g_tail_009d5380;
void func_009d5380()
{
    g_obj_009d5380.m((void*)&g_009d5380_0, (void*)&g_009d5380_1, 392, 15, 0);
    tail_fn_009d5380(&g_tail_009d5380);
}