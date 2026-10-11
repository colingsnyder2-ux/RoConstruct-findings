// from server: 100% by colin
// roc 2007-08 00775340  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775340
//
// 00775340  6a05                 push 5
// 00775342  681c010000           push 0x11c
// 00775347  6878fd7b00           push 0x7bfd78
// 0077534c  6880fd7b00           push 0x7bfd80
// 00775351  b934748c00           mov ecx, 0x8c7434
// 00775356  e8258ce7ff           call 0x5edf80
// 0077535b  68f0bf7700           push 0x77bff0
// 00775360  e8beb9ebff           call 0x630d23
// 00775365  59                   pop ecx
// 00775366  c3                   ret 

extern int g_00775340_0;
extern int g_00775340_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775340(void*);
struct O_00775340 { int m(void*, void*, int, int); };
extern O_00775340 g_obj_00775340;
extern int g_tail_00775340;
void func_00775340()
{
    g_obj_00775340.m((void*)&g_00775340_0, (void*)&g_00775340_1, 284, 5);
    tail_fn_00775340(&g_tail_00775340);
}