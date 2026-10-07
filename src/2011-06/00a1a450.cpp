// roc 2011-06 00a1a450  unit: seg_00a10000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1a450
//
// 00a1a450  687041a300           push 0xa34170
// 00a1a455  e8030ddfff           call 0x80b15d
// 00a1a45a  59                   pop ecx
// 00a1a45b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a1a450;
extern void G1_func_00a1a450(void*);
void func_00a1a450()
{
    G1_func_00a1a450(&G2_func_00a1a450);
}
