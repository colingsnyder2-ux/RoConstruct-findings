// from server: 100% by colin
// roc 2010-06 009d8870  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d8870
//
// 009d8870  6a00                 push 0
// 009d8872  6a02                 push 2
// 009d8874  68d0000000           push 0xd0
// 009d8879  6840ffa200           push 0xa2ff40
// 009d887e  685450a400           push 0xa45054
// 009d8883  b9f01ec200           mov ecx, 0xc21ef0
// 009d8888  e84305d2ff           call 0x6f8dd0
// 009d888d  6840849e00           push 0x9e8440
// 009d8892  e8cc01ddff           call 0x7a8a63
// 009d8897  59                   pop ecx
// 009d8898  c3                   ret 

extern int g_009d8870_0;
extern int g_009d8870_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d8870(void*);
struct O_009d8870 { int m(void*, void*, int, int, int); };
extern O_009d8870 g_obj_009d8870;
extern int g_tail_009d8870;
void func_009d8870()
{
    g_obj_009d8870.m((void*)&g_009d8870_0, (void*)&g_009d8870_1, 208, 2, 0);
    tail_fn_009d8870(&g_tail_009d8870);
}