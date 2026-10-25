// from server: 100% by colin
// roc 2011-06 00a19760  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19760
//
// 00a19760  6a00                 push 0
// 00a19762  6a1f                 push 0x1f
// 00a19764  68c8000000           push 0xc8
// 00a19769  68e483a700           push 0xa783e4
// 00a1976e  683ca5a700           push 0xa7a53c
// 00a19773  b9d87acb00           mov ecx, 0xcb7ad8
// 00a19778  e8139cacff           call 0x4e3390
// 00a1977d  680037a300           push 0xa33700
// 00a19782  e8d619dfff           call 0x80b15d
// 00a19787  59                   pop ecx
// 00a19788  c3                   ret 

extern int g_00a19760_0;
extern int g_00a19760_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a19760(void*);
struct O_00a19760 { int m(void*, void*, int, int, int); };
extern O_00a19760 g_obj_00a19760;
extern int g_tail_00a19760;
void func_00a19760()
{
    g_obj_00a19760.m((void*)&g_00a19760_0, (void*)&g_00a19760_1, 200, 31, 0);
    tail_fn_00a19760(&g_tail_00a19760);
}