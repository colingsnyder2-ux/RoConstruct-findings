// roc 2009-06 00893160  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893160
//
// 00893160  6800d58900           push 0x89d500
// 00893165  e89169e8ff           call 0x719afb
// 0089316a  59                   pop ecx
// 0089316b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00893160;
extern void G1_func_00893160(void*);
void func_00893160()
{
    G1_func_00893160(&G2_func_00893160);
}
