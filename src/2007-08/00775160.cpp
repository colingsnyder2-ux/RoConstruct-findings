// from server: 100% by colin
// roc 2007-08 00775160  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775160
//
// 00775160  6a05                 push 5
// 00775162  6810010000           push 0x110
// 00775167  6898b67900           push 0x79b698
// 0077516c  684cdc7b00           push 0x7bdc4c
// 00775171  b98c6f8c00           mov ecx, 0x8c6f8c
// 00775176  e86536e7ff           call 0x5e87e0
// 0077517b  6850bf7700           push 0x77bf50
// 00775180  e89ebbebff           call 0x630d23
// 00775185  59                   pop ecx
// 00775186  c3                   ret 

extern int g_00775160_0;
extern int g_00775160_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775160(void*);
struct O_00775160 { int m(void*, void*, int, int); };
extern O_00775160 g_obj_00775160;
extern int g_tail_00775160;
void func_00775160()
{
    g_obj_00775160.m((void*)&g_00775160_0, (void*)&g_00775160_1, 272, 5);
    tail_fn_00775160(&g_tail_00775160);
}