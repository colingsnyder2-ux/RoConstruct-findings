// roc 2009-06 00887d80  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887d80
//
// 00887d80  68005b8900           push 0x895b00
// 00887d85  e8711de9ff           call 0x719afb
// 00887d8a  59                   pop ecx
// 00887d8b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00887d80;
extern void G1_func_00887d80(void*);
void func_00887d80()
{
    G1_func_00887d80(&G2_func_00887d80);
}
