// from server: 100% by colin
// roc 2011-06 00a1c910  unit: seg_00a10000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1c910
//
// 00a1c910  6a00                 push 0
// 00a1c912  68fca1a800           push 0xa8a1fc
// 00a1c917  68f4a1a800           push 0xa8a1f4
// 00a1c91c  6888000000           push 0x88
// 00a1c921  b960bccb00           mov ecx, 0xcbbc60
// 00a1c926  e8c59cb7ff           call 0x5965f0
// 00a1c92b  682050a300           push 0xa35020
// 00a1c930  e828e8deff           call 0x80b15d
// 00a1c935  59                   pop ecx
// 00a1c936  c3                   ret 

extern int g_00a1c910_1;
extern int g_00a1c910_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1c910(void*);
struct O_00a1c910 { int m(int, void*, void*, int); };
extern O_00a1c910 g_obj_00a1c910;
extern int g_tail_00a1c910;
void func_00a1c910()
{
    g_obj_00a1c910.m(136, (void*)&g_00a1c910_1, (void*)&g_00a1c910_2, 0);
    tail_fn_00a1c910(&g_tail_00a1c910);
}