// roc 2011-06 00a2f510  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f510
//
// 00a2f510  68f0fca300           push 0xa3fcf0
// 00a2f515  e843bcddff           call 0x80b15d
// 00a2f51a  59                   pop ecx
// 00a2f51b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2f510;
extern void G1_func_00a2f510(void*);
void func_00a2f510()
{
    G1_func_00a2f510(&G2_func_00a2f510);
}
