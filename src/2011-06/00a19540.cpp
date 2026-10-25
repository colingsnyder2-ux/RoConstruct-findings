// from server: 100% by colin
// roc 2011-06 00a19540  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19540
//
// 00a19540  6a00                 push 0
// 00a19542  6a1f                 push 0x1f
// 00a19544  6895000000           push 0x95
// 00a19549  6878a4a700           push 0xa7a478
// 00a1954e  6868a4a700           push 0xa7a468
// 00a19553  b90c7dcb00           mov ecx, 0xcb7d0c
// 00a19558  e883a0acff           call 0x4e35e0
// 00a1955d  68c035a300           push 0xa335c0
// 00a19562  e8f61bdfff           call 0x80b15d
// 00a19567  59                   pop ecx
// 00a19568  c3                   ret 

extern int g_00a19540_0;
extern int g_00a19540_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a19540(void*);
struct O_00a19540 { int m(void*, void*, int, int, int); };
extern O_00a19540 g_obj_00a19540;
extern int g_tail_00a19540;
void func_00a19540()
{
    g_obj_00a19540.m((void*)&g_00a19540_0, (void*)&g_00a19540_1, 149, 31, 0);
    tail_fn_00a19540(&g_tail_00a19540);
}