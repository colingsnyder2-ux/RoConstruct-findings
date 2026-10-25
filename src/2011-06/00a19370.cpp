// from server: 100% by colin
// roc 2011-06 00a19370  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19370
//
// 00a19370  6a00                 push 0
// 00a19372  6a1f                 push 0x1f
// 00a19374  68cc000000           push 0xcc
// 00a19379  6818a2a700           push 0xa7a218
// 00a1937e  688ca3a700           push 0xa7a38c
// 00a19383  b96c7ccb00           mov ecx, 0xcb7c6c
// 00a19388  e883a1acff           call 0x4e3510
// 00a1938d  682035a300           push 0xa33520
// 00a19392  e8c61ddfff           call 0x80b15d
// 00a19397  59                   pop ecx
// 00a19398  c3                   ret 

extern int g_00a19370_0;
extern int g_00a19370_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a19370(void*);
struct O_00a19370 { int m(void*, void*, int, int, int); };
extern O_00a19370 g_obj_00a19370;
extern int g_tail_00a19370;
void func_00a19370()
{
    g_obj_00a19370.m((void*)&g_00a19370_0, (void*)&g_00a19370_1, 204, 31, 0);
    tail_fn_00a19370(&g_tail_00a19370);
}