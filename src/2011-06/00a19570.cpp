// from server: 100% by colin
// roc 2011-06 00a19570  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19570
//
// 00a19570  6a00                 push 0
// 00a19572  6a1f                 push 0x1f
// 00a19574  6896000000           push 0x96
// 00a19579  6878a4a700           push 0xa7a478
// 00a1957e  6884a4a700           push 0xa7a484
// 00a19583  b9b87bcb00           mov ecx, 0xcb7bb8
// 00a19588  e853a0acff           call 0x4e35e0
// 00a1958d  68e035a300           push 0xa335e0
// 00a19592  e8c61bdfff           call 0x80b15d
// 00a19597  59                   pop ecx
// 00a19598  c3                   ret 

extern int g_00a19570_0;
extern int g_00a19570_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a19570(void*);
struct O_00a19570 { int m(void*, void*, int, int, int); };
extern O_00a19570 g_obj_00a19570;
extern int g_tail_00a19570;
void func_00a19570()
{
    g_obj_00a19570.m((void*)&g_00a19570_0, (void*)&g_00a19570_1, 150, 31, 0);
    tail_fn_00a19570(&g_tail_00a19570);
}