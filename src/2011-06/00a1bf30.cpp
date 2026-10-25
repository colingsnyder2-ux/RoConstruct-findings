// from server: 100% by colin
// roc 2011-06 00a1bf30  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1bf30
//
// 00a1bf30  6a00                 push 0
// 00a1bf32  6a1f                 push 0x1f
// 00a1bf34  68a0000000           push 0xa0
// 00a1bf39  68089ba800           push 0xa89b08
// 00a1bf3e  682c9ba800           push 0xa89b2c
// 00a1bf43  b92cb5cb00           mov ecx, 0xcbb52c
// 00a1bf48  e89337b7ff           call 0x58f6e0
// 00a1bf4d  685049a300           push 0xa34950
// 00a1bf52  e806f2deff           call 0x80b15d
// 00a1bf57  59                   pop ecx
// 00a1bf58  c3                   ret 

extern int g_00a1bf30_0;
extern int g_00a1bf30_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1bf30(void*);
struct O_00a1bf30 { int m(void*, void*, int, int, int); };
extern O_00a1bf30 g_obj_00a1bf30;
extern int g_tail_00a1bf30;
void func_00a1bf30()
{
    g_obj_00a1bf30.m((void*)&g_00a1bf30_0, (void*)&g_00a1bf30_1, 160, 31, 0);
    tail_fn_00a1bf30(&g_tail_00a1bf30);
}