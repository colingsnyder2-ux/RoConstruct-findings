// from server: 100% by colin
// roc 2011-06 00a16100  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16100
//
// 00a16100  6a00                 push 0
// 00a16102  6a1f                 push 0x1f
// 00a16104  6894000000           push 0x94
// 00a16109  68fcc8a600           push 0xa6c8fc
// 00a1610e  6820c9a600           push 0xa6c920
// 00a16113  b9e829cb00           mov ecx, 0xcb29e8
// 00a16118  e863aca3ff           call 0x450d80
// 00a1611d  684010a300           push 0xa31040
// 00a16122  e83650dfff           call 0x80b15d
// 00a16127  59                   pop ecx
// 00a16128  c3                   ret 

extern int g_00a16100_0;
extern int g_00a16100_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a16100(void*);
struct O_00a16100 { int m(void*, void*, int, int, int); };
extern O_00a16100 g_obj_00a16100;
extern int g_tail_00a16100;
void func_00a16100()
{
    g_obj_00a16100.m((void*)&g_00a16100_0, (void*)&g_00a16100_1, 148, 31, 0);
    tail_fn_00a16100(&g_tail_00a16100);
}