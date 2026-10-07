// roc 2009-06 00887980  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887980
//
// 00887980  6810588900           push 0x895810
// 00887985  e87121e9ff           call 0x719afb
// 0088798a  59                   pop ecx
// 0088798b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00887980;
extern void G1_func_00887980(void*);
void func_00887980()
{
    G1_func_00887980(&G2_func_00887980);
}
