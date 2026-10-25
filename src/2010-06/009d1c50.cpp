// from server: 100% by colin
// roc 2010-06 009d1c50  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d1c50
//
// 009d1c50  6a00                 push 0
// 009d1c52  6a02                 push 2
// 009d1c54  6824020000           push 0x224
// 009d1c59  6840ffa200           push 0xa2ff40
// 009d1c5e  6868aaa300           push 0xa3aa68
// 009d1c63  b920c7c100           mov ecx, 0xc1c720
// 009d1c68  e88308c9ff           call 0x6624f0
// 009d1c6d  68c0439e00           push 0x9e43c0
// 009d1c72  e8ec6dddff           call 0x7a8a63
// 009d1c77  59                   pop ecx
// 009d1c78  c3                   ret 

extern int g_009d1c50_0;
extern int g_009d1c50_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d1c50(void*);
struct O_009d1c50 { int m(void*, void*, int, int, int); };
extern O_009d1c50 g_obj_009d1c50;
extern int g_tail_009d1c50;
void func_009d1c50()
{
    g_obj_009d1c50.m((void*)&g_009d1c50_0, (void*)&g_009d1c50_1, 548, 2, 0);
    tail_fn_009d1c50(&g_tail_009d1c50);
}