// from server: 100% by colin
// roc 2010-06 009c6520  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c6520
//
// 009c6520  6a01                 push 1
// 009c6522  6a00                 push 0
// 009c6524  68488fa100           push 0xa18f48
// 009c6529  68408fa100           push 0xa18f40
// 009c652e  682c010000           push 0x12c
// 009c6533  b91844c000           mov ecx, 0xc04418
// 009c6538  e83315afff           call 0x4b7a70
// 009c653d  6830c49d00           push 0x9dc430
// 009c6542  e81c25deff           call 0x7a8a63
// 009c6547  59                   pop ecx
// 009c6548  c3                   ret 

extern int g_009c6520_1;
extern int g_009c6520_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c6520(void*);
struct O_009c6520 { int m(int, void*, void*, int, int); };
extern O_009c6520 g_obj_009c6520;
extern int g_tail_009c6520;
void func_009c6520()
{
    g_obj_009c6520.m(300, (void*)&g_009c6520_1, (void*)&g_009c6520_2, 0, 1);
    tail_fn_009c6520(&g_tail_009c6520);
}