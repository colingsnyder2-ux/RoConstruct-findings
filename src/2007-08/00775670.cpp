// from server: 100% by colin
// roc 2007-08 00775670  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775670
//
// 00775670  6a05                 push 5
// 00775672  6810010000           push 0x110
// 00775677  6844fd7b00           push 0x7bfd44
// 0077567c  6814fe7b00           push 0x7bfe14
// 00775681  b9fc738c00           mov ecx, 0x8c73fc
// 00775686  e8257ee7ff           call 0x5ed4b0
// 0077568b  6870c17700           push 0x77c170
// 00775690  e88eb6ebff           call 0x630d23
// 00775695  59                   pop ecx
// 00775696  c3                   ret 

extern int g_00775670_0;
extern int g_00775670_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775670(void*);
struct O_00775670 { int m(void*, void*, int, int); };
extern O_00775670 g_obj_00775670;
extern int g_tail_00775670;
void func_00775670()
{
    g_obj_00775670.m((void*)&g_00775670_0, (void*)&g_00775670_1, 272, 5);
    tail_fn_00775670(&g_tail_00775670);
}