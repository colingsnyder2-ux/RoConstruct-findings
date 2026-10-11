// from server: 100% by colin
// roc 2009-06 00884330  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00884330
//
// 00884330  6a07                 push 7
// 00884332  688c000000           push 0x8c
// 00884337  68f8db8a00           push 0x8adbf8
// 0088433c  6804dc8a00           push 0x8adc04
// 00884341  b948a0a300           mov ecx, 0xa3a048
// 00884346  e88562b8ff           call 0x40a5d0
// 0088434b  68603b8900           push 0x893b60
// 00884350  e8a657e9ff           call 0x719afb
// 00884355  59                   pop ecx
// 00884356  c3                   ret 

extern int g_00884330_0;
extern int g_00884330_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00884330(void*);
struct O_00884330 { int m(void*, void*, int, int); };
extern O_00884330 g_obj_00884330;
extern int g_tail_00884330;
void func_00884330()
{
    g_obj_00884330.m((void*)&g_00884330_0, (void*)&g_00884330_1, 140, 7);
    tail_fn_00884330(&g_tail_00884330);
}