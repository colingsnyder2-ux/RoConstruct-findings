// roc 2011-06 00a1a460  unit: seg_00a10000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1a460
//
// 00a1a460  689041a300           push 0xa34190
// 00a1a465  e8f30cdfff           call 0x80b15d
// 00a1a46a  59                   pop ecx
// 00a1a46b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a1a460;
extern void G1_func_00a1a460(void*);
void func_00a1a460()
{
    G1_func_00a1a460(&G2_func_00a1a460);
}
