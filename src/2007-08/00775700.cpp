// from server: 100% by colin
// roc 2007-08 00775700  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775700
//
// 00775700  6a05                 push 5
// 00775702  68fc000000           push 0xfc
// 00775707  6844fd7b00           push 0x7bfd44
// 0077570c  68f0fd7b00           push 0x7bfdf0
// 00775711  b9dc748c00           mov ecx, 0x8c74dc
// 00775716  e8657ee7ff           call 0x5ed580
// 0077571b  68f0c17700           push 0x77c1f0
// 00775720  e8feb5ebff           call 0x630d23
// 00775725  59                   pop ecx
// 00775726  c3                   ret 

extern int g_00775700_0;
extern int g_00775700_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775700(void*);
struct O_00775700 { int m(void*, void*, int, int); };
extern O_00775700 g_obj_00775700;
extern int g_tail_00775700;
void func_00775700()
{
    g_obj_00775700.m((void*)&g_00775700_0, (void*)&g_00775700_1, 252, 5);
    tail_fn_00775700(&g_tail_00775700);
}