// from server: 100% by colin
// roc 2010-06 009d6430  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d6430
//
// 009d6430  6a00                 push 0
// 009d6432  6a02                 push 2
// 009d6434  681c010000           push 0x11c
// 009d6439  6840ffa200           push 0xa2ff40
// 009d643e  687050a400           push 0xa45070
// 009d6443  b9e804c200           mov ecx, 0xc204e8
// 009d6448  e8a329cfff           call 0x6c8df0
// 009d644d  68706e9e00           push 0x9e6e70
// 009d6452  e80c26ddff           call 0x7a8a63
// 009d6457  59                   pop ecx
// 009d6458  c3                   ret 

extern int g_009d6430_0;
extern int g_009d6430_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d6430(void*);
struct O_009d6430 { int m(void*, void*, int, int, int); };
extern O_009d6430 g_obj_009d6430;
extern int g_tail_009d6430;
void func_009d6430()
{
    g_obj_009d6430.m((void*)&g_009d6430_0, (void*)&g_009d6430_1, 284, 2, 0);
    tail_fn_009d6430(&g_tail_009d6430);
}