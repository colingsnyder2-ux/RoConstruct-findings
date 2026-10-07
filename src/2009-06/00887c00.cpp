// roc 2009-06 00887c00  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887c00
//
// 00887c00  68d0598900           push 0x8959d0
// 00887c05  e8f11ee9ff           call 0x719afb
// 00887c0a  59                   pop ecx
// 00887c0b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00887c00;
extern void G1_func_00887c00(void*);
void func_00887c00()
{
    G1_func_00887c00(&G2_func_00887c00);
}
