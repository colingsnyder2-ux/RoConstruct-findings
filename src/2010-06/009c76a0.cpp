// from server: 100% by colin
// roc 2010-06 009c76a0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c76a0
//
// 009c76a0  6a01                 push 1
// 009c76a2  6a00                 push 0
// 009c76a4  68849da100           push 0xa19d84
// 009c76a9  68989da100           push 0xa19d98
// 009c76ae  6848010000           push 0x148
// 009c76b3  b9585ec000           mov ecx, 0xc05e58
// 009c76b8  e853deb0ff           call 0x4d5510
// 009c76bd  6860d09d00           push 0x9dd060
// 009c76c2  e89c13deff           call 0x7a8a63
// 009c76c7  59                   pop ecx
// 009c76c8  c3                   ret 

extern int g_009c76a0_1;
extern int g_009c76a0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c76a0(void*);
struct O_009c76a0 { int m(int, void*, void*, int, int); };
extern O_009c76a0 g_obj_009c76a0;
extern int g_tail_009c76a0;
void func_009c76a0()
{
    g_obj_009c76a0.m(328, (void*)&g_009c76a0_1, (void*)&g_009c76a0_2, 0, 1);
    tail_fn_009c76a0(&g_tail_009c76a0);
}