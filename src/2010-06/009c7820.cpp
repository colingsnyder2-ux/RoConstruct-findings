// from server: 100% by colin
// roc 2010-06 009c7820  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7820
//
// 009c7820  6a00                 push 0
// 009c7822  6a0f                 push 0xf
// 009c7824  68e0000000           push 0xe0
// 009c7829  6830a2a100           push 0xa1a230
// 009c782e  68a8a3a100           push 0xa1a3a8
// 009c7833  b9705fc000           mov ecx, 0xc05f70
// 009c7838  e853f6b0ff           call 0x4d6e90
// 009c783d  6820d39d00           push 0x9dd320
// 009c7842  e81c12deff           call 0x7a8a63
// 009c7847  59                   pop ecx
// 009c7848  c3                   ret 

extern int g_009c7820_0;
extern int g_009c7820_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c7820(void*);
struct O_009c7820 { int m(void*, void*, int, int, int); };
extern O_009c7820 g_obj_009c7820;
extern int g_tail_009c7820;
void func_009c7820()
{
    g_obj_009c7820.m((void*)&g_009c7820_0, (void*)&g_009c7820_1, 224, 15, 0);
    tail_fn_009c7820(&g_tail_009c7820);
}