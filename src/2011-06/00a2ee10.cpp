// roc 2011-06 00a2ee10  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ee10
//
// 00a2ee10  68b0fba300           push 0xa3fbb0
// 00a2ee15  e843c3ddff           call 0x80b15d
// 00a2ee1a  59                   pop ecx
// 00a2ee1b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2ee10;
extern void G1_func_00a2ee10(void*);
void func_00a2ee10()
{
    G1_func_00a2ee10(&G2_func_00a2ee10);
}
