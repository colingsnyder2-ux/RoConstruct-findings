// from server: 100% by colin
// roc 2010-06 009d5660  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5660
//
// 009d5660  6a00                 push 0
// 009d5662  6a0f                 push 0xf
// 009d5664  6860010000           push 0x160
// 009d5669  68f429a400           push 0xa429f4
// 009d566e  68b82aa400           push 0xa42ab8
// 009d5673  b908fac100           mov ecx, 0xc1fa08
// 009d5678  e89326ceff           call 0x6b7d10
// 009d567d  68d0659e00           push 0x9e65d0
// 009d5682  e8dc33ddff           call 0x7a8a63
// 009d5687  59                   pop ecx
// 009d5688  c3                   ret 

extern int g_009d5660_0;
extern int g_009d5660_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5660(void*);
struct O_009d5660 { int m(void*, void*, int, int, int); };
extern O_009d5660 g_obj_009d5660;
extern int g_tail_009d5660;
void func_009d5660()
{
    g_obj_009d5660.m((void*)&g_009d5660_0, (void*)&g_009d5660_1, 352, 15, 0);
    tail_fn_009d5660(&g_tail_009d5660);
}