// from server: 100% by colin
// roc 2011-06 00a2bce0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bce0
//
// 00a2bce0  6a00                 push 0
// 00a2bce2  6a1f                 push 0x1f
// 00a2bce4  685c010000           push 0x15c
// 00a2bce9  6880d2aa00           push 0xaad280
// 00a2bcee  68643aa900           push 0xa93a64
// 00a2bcf3  b9682ccd00           mov ecx, 0xcd2c68
// 00a2bcf8  e85374cdff           call 0x703150
// 00a2bcfd  6840dea300           push 0xa3de40
// 00a2bd02  e856f4ddff           call 0x80b15d
// 00a2bd07  59                   pop ecx
// 00a2bd08  c3                   ret 

extern int g_00a2bce0_0;
extern int g_00a2bce0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bce0(void*);
struct O_00a2bce0 { int m(void*, void*, int, int, int); };
extern O_00a2bce0 g_obj_00a2bce0;
extern int g_tail_00a2bce0;
void func_00a2bce0()
{
    g_obj_00a2bce0.m((void*)&g_00a2bce0_0, (void*)&g_00a2bce0_1, 348, 31, 0);
    tail_fn_00a2bce0(&g_tail_00a2bce0);
}