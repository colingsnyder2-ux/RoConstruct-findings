// from server: 100% by colin
// roc 2007-08 00775850  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775850
//
// 00775850  6a05                 push 5
// 00775852  6808010000           push 0x108
// 00775857  6844fd7b00           push 0x7bfd44
// 0077585c  6844527a00           push 0x7a5244
// 00775861  b988758c00           mov ecx, 0x8c7588
// 00775866  e8358fe7ff           call 0x5ee7a0
// 0077586b  6830c27700           push 0x77c230
// 00775870  e8aeb4ebff           call 0x630d23
// 00775875  59                   pop ecx
// 00775876  c3                   ret 

extern int g_00775850_0;
extern int g_00775850_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775850(void*);
struct O_00775850 { int m(void*, void*, int, int); };
extern O_00775850 g_obj_00775850;
extern int g_tail_00775850;
void func_00775850()
{
    g_obj_00775850.m((void*)&g_00775850_0, (void*)&g_00775850_1, 264, 5);
    tail_fn_00775850(&g_tail_00775850);
}