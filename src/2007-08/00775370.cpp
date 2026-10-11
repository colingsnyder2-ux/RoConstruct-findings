// from server: 100% by colin
// roc 2007-08 00775370  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775370
//
// 00775370  6a05                 push 5
// 00775372  6820010000           push 0x120
// 00775377  6878fd7b00           push 0x7bfd78
// 0077537c  688cfd7b00           push 0x7bfd8c
// 00775381  b90c768c00           mov ecx, 0x8c760c
// 00775386  e8f58be7ff           call 0x5edf80
// 0077538b  6810c07700           push 0x77c010
// 00775390  e88eb9ebff           call 0x630d23
// 00775395  59                   pop ecx
// 00775396  c3                   ret 

extern int g_00775370_0;
extern int g_00775370_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775370(void*);
struct O_00775370 { int m(void*, void*, int, int); };
extern O_00775370 g_obj_00775370;
extern int g_tail_00775370;
void func_00775370()
{
    g_obj_00775370.m((void*)&g_00775370_0, (void*)&g_00775370_1, 288, 5);
    tail_fn_00775370(&g_tail_00775370);
}