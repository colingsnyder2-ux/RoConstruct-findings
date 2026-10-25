// from server: 100% by colin
// roc 2010-06 009d5440  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5440
//
// 009d5440  6a00                 push 0
// 009d5442  6a0f                 push 0xf
// 009d5444  689c010000           push 0x19c
// 009d5449  68542aa400           push 0xa42a54
// 009d544e  68642aa400           push 0xa42a64
// 009d5453  b920f7c100           mov ecx, 0xc1f720
// 009d5458  e8a324ceff           call 0x6b7900
// 009d545d  68f0649e00           push 0x9e64f0
// 009d5462  e8fc35ddff           call 0x7a8a63
// 009d5467  59                   pop ecx
// 009d5468  c3                   ret 

extern int g_009d5440_0;
extern int g_009d5440_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5440(void*);
struct O_009d5440 { int m(void*, void*, int, int, int); };
extern O_009d5440 g_obj_009d5440;
extern int g_tail_009d5440;
void func_009d5440()
{
    g_obj_009d5440.m((void*)&g_009d5440_0, (void*)&g_009d5440_1, 412, 15, 0);
    tail_fn_009d5440(&g_tail_009d5440);
}