// from server: 100% by colin
// roc 2011-06 00a2c300  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c300
//
// 00a2c300  6a00                 push 0
// 00a2c302  6a1f                 push 0x1f
// 00a2c304  68b0000000           push 0xb0
// 00a2c309  68fc6ba900           push 0xa96bfc
// 00a2c30e  689ce4aa00           push 0xaae49c
// 00a2c313  b93c33cd00           mov ecx, 0xcd333c
// 00a2c318  e86307ceff           call 0x70ca80
// 00a2c31d  6830e3a300           push 0xa3e330
// 00a2c322  e836eeddff           call 0x80b15d
// 00a2c327  59                   pop ecx
// 00a2c328  c3                   ret 

extern int g_00a2c300_0;
extern int g_00a2c300_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c300(void*);
struct O_00a2c300 { int m(void*, void*, int, int, int); };
extern O_00a2c300 g_obj_00a2c300;
extern int g_tail_00a2c300;
void func_00a2c300()
{
    g_obj_00a2c300.m((void*)&g_00a2c300_0, (void*)&g_00a2c300_1, 176, 31, 0);
    tail_fn_00a2c300(&g_tail_00a2c300);
}