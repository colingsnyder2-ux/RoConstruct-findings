// from server: 100% by colin
// roc 2011-06 00a28820  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a28820
//
// 00a28820  6a00                 push 0
// 00a28822  6a02                 push 2
// 00a28824  680c010000           push 0x10c
// 00a28829  688064a900           push 0xa96480
// 00a2882e  680c3faa00           push 0xaa3f0c
// 00a28833  b99800cd00           mov ecx, 0xcd0098
// 00a28838  e8232ec8ff           call 0x6ab660
// 00a2883d  68c0c2a300           push 0xa3c2c0
// 00a28842  e81629deff           call 0x80b15d
// 00a28847  59                   pop ecx
// 00a28848  c3                   ret 

extern int g_00a28820_0;
extern int g_00a28820_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a28820(void*);
struct O_00a28820 { int m(void*, void*, int, int, int); };
extern O_00a28820 g_obj_00a28820;
extern int g_tail_00a28820;
void func_00a28820()
{
    g_obj_00a28820.m((void*)&g_00a28820_0, (void*)&g_00a28820_1, 268, 2, 0);
    tail_fn_00a28820(&g_tail_00a28820);
}