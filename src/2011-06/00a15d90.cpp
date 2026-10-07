// roc 2011-06 00a15d90  unit: seg_00a10000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15d90
//
// 00a15d90  68200aa300           push 0xa30a20
// 00a15d95  e8c353dfff           call 0x80b15d
// 00a15d9a  59                   pop ecx
// 00a15d9b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a15d90;
extern void G1_func_00a15d90(void*);
void func_00a15d90()
{
    G1_func_00a15d90(&G2_func_00a15d90);
}
