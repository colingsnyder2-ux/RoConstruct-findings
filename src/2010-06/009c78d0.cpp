// from server: 100% by colin
// roc 2010-06 009c78d0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c78d0
//
// 009c78d0  6a00                 push 0
// 009c78d2  6a0f                 push 0xf
// 009c78d4  68f4000000           push 0xf4
// 009c78d9  6830a2a100           push 0xa1a230
// 009c78de  68e8a3a100           push 0xa1a3e8
// 009c78e3  b9505fc000           mov ecx, 0xc05f50
// 009c78e8  e853f3b0ff           call 0x4d6c40
// 009c78ed  6860d19d00           push 0x9dd160
// 009c78f2  e86c11deff           call 0x7a8a63
// 009c78f7  59                   pop ecx
// 009c78f8  c3                   ret 

extern int g_009c78d0_0;
extern int g_009c78d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c78d0(void*);
struct O_009c78d0 { int m(void*, void*, int, int, int); };
extern O_009c78d0 g_obj_009c78d0;
extern int g_tail_009c78d0;
void func_009c78d0()
{
    g_obj_009c78d0.m((void*)&g_009c78d0_0, (void*)&g_009c78d0_1, 244, 15, 0);
    tail_fn_009c78d0(&g_tail_009c78d0);
}