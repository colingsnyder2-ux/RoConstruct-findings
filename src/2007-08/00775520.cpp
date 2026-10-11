// from server: 100% by colin
// roc 2007-08 00775520  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775520
//
// 00775520  6a05                 push 5
// 00775522  68fc000000           push 0xfc
// 00775527  6844fd7b00           push 0x7bfd44
// 0077552c  68f0fd7b00           push 0x7bfdf0
// 00775531  b9a8738c00           mov ecx, 0x8c73a8
// 00775536  e8c58ce7ff           call 0x5ee200
// 0077553b  68f0c07700           push 0x77c0f0
// 00775540  e8deb7ebff           call 0x630d23
// 00775545  59                   pop ecx
// 00775546  c3                   ret 

extern int g_00775520_0;
extern int g_00775520_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775520(void*);
struct O_00775520 { int m(void*, void*, int, int); };
extern O_00775520 g_obj_00775520;
extern int g_tail_00775520;
void func_00775520()
{
    g_obj_00775520.m((void*)&g_00775520_0, (void*)&g_00775520_1, 252, 5);
    tail_fn_00775520(&g_tail_00775520);
}