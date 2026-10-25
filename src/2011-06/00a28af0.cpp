// from server: 100% by colin
// roc 2011-06 00a28af0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a28af0
//
// 00a28af0  6a00                 push 0
// 00a28af2  6a02                 push 2
// 00a28af4  6834020000           push 0x234
// 00a28af9  688064a900           push 0xa96480
// 00a28afe  68fc3faa00           push 0xaa3ffc
// 00a28b03  b91807cd00           mov ecx, 0xcd0718
// 00a28b08  e8932cc8ff           call 0x6ab7a0
// 00a28b0d  6840c3a300           push 0xa3c340
// 00a28b12  e84626deff           call 0x80b15d
// 00a28b17  59                   pop ecx
// 00a28b18  c3                   ret 

extern int g_00a28af0_0;
extern int g_00a28af0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a28af0(void*);
struct O_00a28af0 { int m(void*, void*, int, int, int); };
extern O_00a28af0 g_obj_00a28af0;
extern int g_tail_00a28af0;
void func_00a28af0()
{
    g_obj_00a28af0.m((void*)&g_00a28af0_0, (void*)&g_00a28af0_1, 564, 2, 0);
    tail_fn_00a28af0(&g_tail_00a28af0);
}