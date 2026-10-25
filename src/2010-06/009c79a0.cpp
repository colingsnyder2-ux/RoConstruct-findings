// from server: 100% by colin
// roc 2010-06 009c79a0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c79a0
//
// 009c79a0  6a00                 push 0
// 009c79a2  6a0f                 push 0xf
// 009c79a4  689a000000           push 0x9a
// 009c79a9  6838a4a100           push 0xa1a438
// 009c79ae  6844a4a100           push 0xa1a444
// 009c79b3  b9905fc000           mov ecx, 0xc05f90
// 009c79b8  e803f7b0ff           call 0x4d70c0
// 009c79bd  6880d19d00           push 0x9dd180
// 009c79c2  e89c10deff           call 0x7a8a63
// 009c79c7  59                   pop ecx
// 009c79c8  c3                   ret 

extern int g_009c79a0_0;
extern int g_009c79a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c79a0(void*);
struct O_009c79a0 { int m(void*, void*, int, int, int); };
extern O_009c79a0 g_obj_009c79a0;
extern int g_tail_009c79a0;
void func_009c79a0()
{
    g_obj_009c79a0.m((void*)&g_009c79a0_0, (void*)&g_009c79a0_1, 154, 15, 0);
    tail_fn_009c79a0(&g_tail_009c79a0);
}