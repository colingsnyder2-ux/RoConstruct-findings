// from server: 100% by colin
// roc 2011-06 00a22fa0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a22fa0
//
// 00a22fa0  6a00                 push 0
// 00a22fa2  6a1f                 push 0x1f
// 00a22fa4  682c020000           push 0x22c
// 00a22fa9  68f424a900           push 0xa924f4
// 00a22fae  68546ca900           push 0xa96c54
// 00a22fb3  b974c3cc00           mov ecx, 0xccc374
// 00a22fb8  e843ffc0ff           call 0x632f00
// 00a22fbd  68d09ea300           push 0xa39ed0
// 00a22fc2  e89681deff           call 0x80b15d
// 00a22fc7  59                   pop ecx
// 00a22fc8  c3                   ret 

extern int g_00a22fa0_0;
extern int g_00a22fa0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a22fa0(void*);
struct O_00a22fa0 { int m(void*, void*, int, int, int); };
extern O_00a22fa0 g_obj_00a22fa0;
extern int g_tail_00a22fa0;
void func_00a22fa0()
{
    g_obj_00a22fa0.m((void*)&g_00a22fa0_0, (void*)&g_00a22fa0_1, 556, 31, 0);
    tail_fn_00a22fa0(&g_tail_00a22fa0);
}