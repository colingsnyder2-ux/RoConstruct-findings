// from server: 100% by colin
// roc 2010-06 009d5410  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5410
//
// 009d5410  6a00                 push 0
// 009d5412  6a0f                 push 0xf
// 009d5414  6898010000           push 0x198
// 009d5419  68542aa400           push 0xa42a54
// 009d541e  685c2aa400           push 0xa42a5c
// 009d5423  b9a0f6c100           mov ecx, 0xc1f6a0
// 009d5428  e80324ceff           call 0x6b7830
// 009d542d  68b0649e00           push 0x9e64b0
// 009d5432  e82c36ddff           call 0x7a8a63
// 009d5437  59                   pop ecx
// 009d5438  c3                   ret 

extern int g_009d5410_0;
extern int g_009d5410_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5410(void*);
struct O_009d5410 { int m(void*, void*, int, int, int); };
extern O_009d5410 g_obj_009d5410;
extern int g_tail_009d5410;
void func_009d5410()
{
    g_obj_009d5410.m((void*)&g_009d5410_0, (void*)&g_009d5410_1, 408, 15, 0);
    tail_fn_009d5410(&g_tail_009d5410);
}