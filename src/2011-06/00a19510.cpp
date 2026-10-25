// from server: 100% by colin
// roc 2011-06 00a19510  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19510
//
// 00a19510  6a00                 push 0
// 00a19512  6a1f                 push 0x1f
// 00a19514  689a000000           push 0x9a
// 00a19519  6818a2a700           push 0xa7a218
// 00a1951e  6850a4a700           push 0xa7a450
// 00a19523  b9587bcb00           mov ecx, 0xcb7b58
// 00a19528  e8b3a0acff           call 0x4e35e0
// 00a1952d  68a035a300           push 0xa335a0
// 00a19532  e8261cdfff           call 0x80b15d
// 00a19537  59                   pop ecx
// 00a19538  c3                   ret 

extern int g_00a19510_0;
extern int g_00a19510_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a19510(void*);
struct O_00a19510 { int m(void*, void*, int, int, int); };
extern O_00a19510 g_obj_00a19510;
extern int g_tail_00a19510;
void func_00a19510()
{
    g_obj_00a19510.m((void*)&g_00a19510_0, (void*)&g_00a19510_1, 154, 31, 0);
    tail_fn_00a19510(&g_tail_00a19510);
}