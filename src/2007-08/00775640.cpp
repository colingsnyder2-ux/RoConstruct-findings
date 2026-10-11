// from server: 100% by colin
// roc 2007-08 00775640  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775640
//
// 00775640  6a05                 push 5
// 00775642  6804010000           push 0x104
// 00775647  6844fd7b00           push 0x7bfd44
// 0077564c  6808fe7b00           push 0x7bfe08
// 00775651  b94c778c00           mov ecx, 0x8c774c
// 00775656  e8557ee7ff           call 0x5ed4b0
// 0077565b  6890c17700           push 0x77c190
// 00775660  e8beb6ebff           call 0x630d23
// 00775665  59                   pop ecx
// 00775666  c3                   ret 

extern int g_00775640_0;
extern int g_00775640_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775640(void*);
struct O_00775640 { int m(void*, void*, int, int); };
extern O_00775640 g_obj_00775640;
extern int g_tail_00775640;
void func_00775640()
{
    g_obj_00775640.m((void*)&g_00775640_0, (void*)&g_00775640_1, 260, 5);
    tail_fn_00775640(&g_tail_00775640);
}