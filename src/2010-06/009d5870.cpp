// from server: 100% by colin
// roc 2010-06 009d5870  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5870
//
// 009d5870  6a00                 push 0
// 009d5872  6a0f                 push 0xf
// 009d5874  6868010000           push 0x168
// 009d5879  68f429a400           push 0xa429f4
// 009d587e  68ec2aa400           push 0xa42aec
// 009d5883  b960f5c100           mov ecx, 0xc1f560
// 009d5888  e8c327ceff           call 0x6b8050
// 009d588d  6850669e00           push 0x9e6650
// 009d5892  e8cc31ddff           call 0x7a8a63
// 009d5897  59                   pop ecx
// 009d5898  c3                   ret 

extern int g_009d5870_0;
extern int g_009d5870_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5870(void*);
struct O_009d5870 { int m(void*, void*, int, int, int); };
extern O_009d5870 g_obj_009d5870;
extern int g_tail_009d5870;
void func_009d5870()
{
    g_obj_009d5870.m((void*)&g_009d5870_0, (void*)&g_009d5870_1, 360, 15, 0);
    tail_fn_009d5870(&g_tail_009d5870);
}