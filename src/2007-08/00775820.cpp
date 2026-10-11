// from server: 100% by colin
// roc 2007-08 00775820  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775820
//
// 00775820  6a05                 push 5
// 00775822  68fc000000           push 0xfc
// 00775827  6844fd7b00           push 0x7bfd44
// 0077582c  6848fe7b00           push 0x7bfe48
// 00775831  b944768c00           mov ecx, 0x8c7644
// 00775836  e8658fe7ff           call 0x5ee7a0
// 0077583b  6850c27700           push 0x77c250
// 00775840  e8deb4ebff           call 0x630d23
// 00775845  59                   pop ecx
// 00775846  c3                   ret 

extern int g_00775820_0;
extern int g_00775820_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775820(void*);
struct O_00775820 { int m(void*, void*, int, int); };
extern O_00775820 g_obj_00775820;
extern int g_tail_00775820;
void func_00775820()
{
    g_obj_00775820.m((void*)&g_00775820_0, (void*)&g_00775820_1, 252, 5);
    tail_fn_00775820(&g_tail_00775820);
}