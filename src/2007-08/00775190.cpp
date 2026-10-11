// from server: 100% by colin
// roc 2007-08 00775190  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775190
//
// 00775190  6a05                 push 5
// 00775192  6800010000           push 0x100
// 00775197  6898b67900           push 0x79b698
// 0077519c  68f8af7a00           push 0x7aaff8
// 007751a1  b9706f8c00           mov ecx, 0x8c6f70
// 007751a6  e80537e7ff           call 0x5e88b0
// 007751ab  6830bf7700           push 0x77bf30
// 007751b0  e86ebbebff           call 0x630d23
// 007751b5  59                   pop ecx
// 007751b6  c3                   ret 

extern int g_00775190_0;
extern int g_00775190_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775190(void*);
struct O_00775190 { int m(void*, void*, int, int); };
extern O_00775190 g_obj_00775190;
extern int g_tail_00775190;
void func_00775190()
{
    g_obj_00775190.m((void*)&g_00775190_0, (void*)&g_00775190_1, 256, 5);
    tail_fn_00775190(&g_tail_00775190);
}