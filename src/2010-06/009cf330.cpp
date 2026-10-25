// from server: 100% by colin
// roc 2010-06 009cf330  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cf330
//
// 009cf330  6a02                 push 2
// 009cf332  6a09                 push 9
// 009cf334  682c010000           push 0x12c
// 009cf339  6828b8a000           push 0xa0b828
// 009cf33e  68e01aa300           push 0xa31ae0
// 009cf343  b9d09ec100           mov ecx, 0xc19ed0
// 009cf348  e82332c4ff           call 0x612570
// 009cf34d  68502d9e00           push 0x9e2d50
// 009cf352  e80c97ddff           call 0x7a8a63
// 009cf357  59                   pop ecx
// 009cf358  c3                   ret 

extern int g_009cf330_0;
extern int g_009cf330_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009cf330(void*);
struct O_009cf330 { int m(void*, void*, int, int, int); };
extern O_009cf330 g_obj_009cf330;
extern int g_tail_009cf330;
void func_009cf330()
{
    g_obj_009cf330.m((void*)&g_009cf330_0, (void*)&g_009cf330_1, 300, 9, 2);
    tail_fn_009cf330(&g_tail_009cf330);
}