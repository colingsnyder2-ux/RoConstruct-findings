// from server: 100% by colin
// roc 2010-06 009d5b60  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5b60
//
// 009d5b60  6a00                 push 0
// 009d5b62  6a0f                 push 0xf
// 009d5b64  68a0000000           push 0xa0
// 009d5b69  685c8ea100           push 0xa18e5c
// 009d5b6e  687074a300           push 0xa37470
// 009d5b73  b994fbc100           mov ecx, 0xc1fb94
// 009d5b78  e85379ceff           call 0x6bd4d0
// 009d5b7d  68706a9e00           push 0x9e6a70
// 009d5b82  e8dc2eddff           call 0x7a8a63
// 009d5b87  59                   pop ecx
// 009d5b88  c3                   ret 

extern int g_009d5b60_0;
extern int g_009d5b60_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5b60(void*);
struct O_009d5b60 { int m(void*, void*, int, int, int); };
extern O_009d5b60 g_obj_009d5b60;
extern int g_tail_009d5b60;
void func_009d5b60()
{
    g_obj_009d5b60.m((void*)&g_009d5b60_0, (void*)&g_009d5b60_1, 160, 15, 0);
    tail_fn_009d5b60(&g_tail_009d5b60);
}