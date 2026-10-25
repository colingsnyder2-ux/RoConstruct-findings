// from server: 100% by colin
// roc 2011-06 00a1d2f0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1d2f0
//
// 00a1d2f0  6a00                 push 0
// 00a1d2f2  6a1f                 push 0x1f
// 00a1d2f4  6899000000           push 0x99
// 00a1d2f9  68e483a700           push 0xa783e4
// 00a1d2fe  6890d6a800           push 0xa8d690
// 00a1d303  b970d9cb00           mov ecx, 0xcbd970
// 00a1d308  e813a1b8ff           call 0x5a7420
// 00a1d30d  685055a300           push 0xa35550
// 00a1d312  e846dedeff           call 0x80b15d
// 00a1d317  59                   pop ecx
// 00a1d318  c3                   ret 

extern int g_00a1d2f0_0;
extern int g_00a1d2f0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1d2f0(void*);
struct O_00a1d2f0 { int m(void*, void*, int, int, int); };
extern O_00a1d2f0 g_obj_00a1d2f0;
extern int g_tail_00a1d2f0;
void func_00a1d2f0()
{
    g_obj_00a1d2f0.m((void*)&g_00a1d2f0_0, (void*)&g_00a1d2f0_1, 153, 31, 0);
    tail_fn_00a1d2f0(&g_tail_00a1d2f0);
}