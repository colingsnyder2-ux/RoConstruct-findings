// from server: 100% by colin
// roc 2011-06 00a2c430  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c430
//
// 00a2c430  6a00                 push 0
// 00a2c432  6a1f                 push 0x1f
// 00a2c434  6850010000           push 0x150
// 00a2c439  68fc6ba900           push 0xa96bfc
// 00a2c43e  68e4e4aa00           push 0xaae4e4
// 00a2c443  b91c33cd00           mov ecx, 0xcd331c
// 00a2c448  e8b307ceff           call 0x70cc00
// 00a2c44d  6870e3a300           push 0xa3e370
// 00a2c452  e806edddff           call 0x80b15d
// 00a2c457  59                   pop ecx
// 00a2c458  c3                   ret 

extern int g_00a2c430_0;
extern int g_00a2c430_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c430(void*);
struct O_00a2c430 { int m(void*, void*, int, int, int); };
extern O_00a2c430 g_obj_00a2c430;
extern int g_tail_00a2c430;
void func_00a2c430()
{
    g_obj_00a2c430.m((void*)&g_00a2c430_0, (void*)&g_00a2c430_1, 336, 31, 0);
    tail_fn_00a2c430(&g_tail_00a2c430);
}