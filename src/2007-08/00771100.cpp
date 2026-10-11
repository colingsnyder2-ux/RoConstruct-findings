// from server: 100% by colin
// roc 2007-08 00771100  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771100
//
// 00771100  6a05                 push 5
// 00771102  68f1000000           push 0xf1
// 00771107  6898b67900           push 0x79b698
// 0077110c  68c0827a00           push 0x7a82c0
// 00771111  b9301d8c00           mov ecx, 0x8c1d30
// 00771116  e8d532deff           call 0x5543f0
// 0077111b  68a09a7700           push 0x779aa0
// 00771120  e8fefbebff           call 0x630d23
// 00771125  59                   pop ecx
// 00771126  c3                   ret 

extern int g_00771100_0;
extern int g_00771100_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00771100(void*);
struct O_00771100 { int m(void*, void*, int, int); };
extern O_00771100 g_obj_00771100;
extern int g_tail_00771100;
void func_00771100()
{
    g_obj_00771100.m((void*)&g_00771100_0, (void*)&g_00771100_1, 241, 5);
    tail_fn_00771100(&g_tail_00771100);
}