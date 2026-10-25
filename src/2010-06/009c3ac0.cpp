// from server: 100% by colin
// roc 2010-06 009c3ac0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c3ac0
//
// 009c3ac0  6a00                 push 0
// 009c3ac2  6a06                 push 6
// 009c3ac4  68fc000000           push 0xfc
// 009c3ac9  6850b8a000           push 0xa0b850
// 009c3ace  6858b8a000           push 0xa0b858
// 009c3ad3  b93815c000           mov ecx, 0xc01538
// 009c3ad8  e8e35ba8ff           call 0x4496c0
// 009c3add  6850b79d00           push 0x9db750
// 009c3ae2  e87c4fdeff           call 0x7a8a63
// 009c3ae7  59                   pop ecx
// 009c3ae8  c3                   ret 

extern int g_009c3ac0_0;
extern int g_009c3ac0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c3ac0(void*);
struct O_009c3ac0 { int m(void*, void*, int, int, int); };
extern O_009c3ac0 g_obj_009c3ac0;
extern int g_tail_009c3ac0;
void func_009c3ac0()
{
    g_obj_009c3ac0.m((void*)&g_009c3ac0_0, (void*)&g_009c3ac0_1, 252, 6, 0);
    tail_fn_009c3ac0(&g_tail_009c3ac0);
}