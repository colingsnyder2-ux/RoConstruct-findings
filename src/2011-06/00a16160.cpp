// from server: 100% by colin
// roc 2011-06 00a16160  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16160
//
// 00a16160  6a00                 push 0
// 00a16162  6a1f                 push 0x1f
// 00a16164  68b4000000           push 0xb4
// 00a16169  68fcc8a600           push 0xa6c8fc
// 00a1616e  6838c9a600           push 0xa6c938
// 00a16173  b9282acb00           mov ecx, 0xcb2a28
// 00a16178  e8d3aca3ff           call 0x450e50
// 00a1617d  680010a300           push 0xa31000
// 00a16182  e8d64fdfff           call 0x80b15d
// 00a16187  59                   pop ecx
// 00a16188  c3                   ret 

extern int g_00a16160_0;
extern int g_00a16160_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a16160(void*);
struct O_00a16160 { int m(void*, void*, int, int, int); };
extern O_00a16160 g_obj_00a16160;
extern int g_tail_00a16160;
void func_00a16160()
{
    g_obj_00a16160.m((void*)&g_00a16160_0, (void*)&g_00a16160_1, 180, 31, 0);
    tail_fn_00a16160(&g_tail_00a16160);
}