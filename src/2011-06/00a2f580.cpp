// roc 2011-06 00a2f580  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f580
//
// 00a2f580  6820fda300           push 0xa3fd20
// 00a2f585  e8d3bbddff           call 0x80b15d
// 00a2f58a  59                   pop ecx
// 00a2f58b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2f580;
extern void G1_func_00a2f580(void*);
void func_00a2f580()
{
    G1_func_00a2f580(&G2_func_00a2f580);
}
