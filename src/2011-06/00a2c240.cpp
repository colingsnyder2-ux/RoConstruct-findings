// from server: 100% by colin
// roc 2011-06 00a2c240  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c240
//
// 00a2c240  6a00                 push 0
// 00a2c242  6a02                 push 2
// 00a2c244  6834010000           push 0x134
// 00a2c249  688064a900           push 0xa96480
// 00a2c24e  68b8d7aa00           push 0xaad7b8
// 00a2c253  b9cc31cd00           mov ecx, 0xcd31cc
// 00a2c258  e8a3cccdff           call 0x708f00
// 00a2c25d  68c0e1a300           push 0xa3e1c0
// 00a2c262  e8f6eeddff           call 0x80b15d
// 00a2c267  59                   pop ecx
// 00a2c268  c3                   ret 

extern int g_00a2c240_0;
extern int g_00a2c240_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c240(void*);
struct O_00a2c240 { int m(void*, void*, int, int, int); };
extern O_00a2c240 g_obj_00a2c240;
extern int g_tail_00a2c240;
void func_00a2c240()
{
    g_obj_00a2c240.m((void*)&g_00a2c240_0, (void*)&g_00a2c240_1, 308, 2, 0);
    tail_fn_00a2c240(&g_tail_00a2c240);
}