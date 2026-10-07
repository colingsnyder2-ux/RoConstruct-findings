// roc 2011-06 00a2ee00  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ee00
//
// 00a2ee00  6870fba300           push 0xa3fb70
// 00a2ee05  e853c3ddff           call 0x80b15d
// 00a2ee0a  59                   pop ecx
// 00a2ee0b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2ee00;
extern void G1_func_00a2ee00(void*);
void func_00a2ee00()
{
    G1_func_00a2ee00(&G2_func_00a2ee00);
}
