// from server: 100% by colin
// roc 2011-06 00a2c390  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c390
//
// 00a2c390  6a00                 push 0
// 00a2c392  6a1f                 push 0x1f
// 00a2c394  6810010000           push 0x110
// 00a2c399  68fc6ba900           push 0xa96bfc
// 00a2c39e  68c0e4aa00           push 0xaae4c0
// 00a2c3a3  b90834cd00           mov ecx, 0xcd3408
// 00a2c3a8  e8d306ceff           call 0x70ca80
// 00a2c3ad  68f0e2a300           push 0xa3e2f0
// 00a2c3b2  e8a6edddff           call 0x80b15d
// 00a2c3b7  59                   pop ecx
// 00a2c3b8  c3                   ret 

extern int g_00a2c390_0;
extern int g_00a2c390_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c390(void*);
struct O_00a2c390 { int m(void*, void*, int, int, int); };
extern O_00a2c390 g_obj_00a2c390;
extern int g_tail_00a2c390;
void func_00a2c390()
{
    g_obj_00a2c390.m((void*)&g_00a2c390_0, (void*)&g_00a2c390_1, 272, 31, 0);
    tail_fn_00a2c390(&g_tail_00a2c390);
}