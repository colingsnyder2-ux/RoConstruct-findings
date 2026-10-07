// roc 2011-06 00a16f60  unit: seg_00a10000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16f60
//
// 00a16f60  680017a300           push 0xa31700
// 00a16f65  e8f341dfff           call 0x80b15d
// 00a16f6a  59                   pop ecx
// 00a16f6b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a16f60;
extern void G1_func_00a16f60(void*);
void func_00a16f60()
{
    G1_func_00a16f60(&G2_func_00a16f60);
}
