// from server: 100% by colin
// roc 2007-08 0076cf30  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cf30
//
// 0076cf30  6a05                 push 5
// 0076cf32  68e9000000           push 0xe9
// 0076cf37  68d4f97800           push 0x78f9d4
// 0076cf3c  68e0f97800           push 0x78f9e0
// 0076cf41  b940ba8b00           mov ecx, 0x8bba40
// 0076cf46  e8056fcdff           call 0x443e50
// 0076cf4b  68d07a7700           push 0x777ad0
// 0076cf50  e8ce3decff           call 0x630d23
// 0076cf55  59                   pop ecx
// 0076cf56  c3                   ret 

extern int g_0076cf30_0;
extern int g_0076cf30_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076cf30(void*);
struct O_0076cf30 { int m(void*, void*, int, int); };
extern O_0076cf30 g_obj_0076cf30;
extern int g_tail_0076cf30;
void func_0076cf30()
{
    g_obj_0076cf30.m((void*)&g_0076cf30_0, (void*)&g_0076cf30_1, 233, 5);
    tail_fn_0076cf30(&g_tail_0076cf30);
}