// from server: 100% by colin
// roc 2011-06 00a1c820  unit: seg_00a10000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1c820
//
// 00a1c820  6a00                 push 0
// 00a1c822  68a0a1a800           push 0xa8a1a0
// 00a1c827  6894a1a800           push 0xa8a194
// 00a1c82c  6a74                 push 0x74
// 00a1c82e  b93cbecb00           mov ecx, 0xcbbe3c
// 00a1c833  e8989bb7ff           call 0x5963d0
// 00a1c838  684050a300           push 0xa35040
// 00a1c83d  e81be9deff           call 0x80b15d
// 00a1c842  59                   pop ecx
// 00a1c843  c3                   ret 

extern int g_00a1c820_1;
extern int g_00a1c820_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1c820(void*);
struct O_00a1c820 { int m(int, void*, void*, int); };
extern O_00a1c820 g_obj_00a1c820;
extern int g_tail_00a1c820;
void func_00a1c820()
{
    g_obj_00a1c820.m(116, (void*)&g_00a1c820_1, (void*)&g_00a1c820_2, 0);
    tail_fn_00a1c820(&g_tail_00a1c820);
}