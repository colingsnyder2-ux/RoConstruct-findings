// from server: 100% by colin
// roc 2010-06 009d1160  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d1160
//
// 009d1160  6a01                 push 1
// 009d1162  6a00                 push 0
// 009d1164  683491a300           push 0xa39134
// 009d1169  686091a300           push 0xa39160
// 009d116e  68ec000000           push 0xec
// 009d1173  b940bec100           mov ecx, 0xc1be40
// 009d1178  e8f3cfc7ff           call 0x64e170
// 009d117d  68303e9e00           push 0x9e3e30
// 009d1182  e8dc78ddff           call 0x7a8a63
// 009d1187  59                   pop ecx
// 009d1188  c3                   ret 

extern int g_009d1160_1;
extern int g_009d1160_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d1160(void*);
struct O_009d1160 { int m(int, void*, void*, int, int); };
extern O_009d1160 g_obj_009d1160;
extern int g_tail_009d1160;
void func_009d1160()
{
    g_obj_009d1160.m(236, (void*)&g_009d1160_1, (void*)&g_009d1160_2, 0, 1);
    tail_fn_009d1160(&g_tail_009d1160);
}