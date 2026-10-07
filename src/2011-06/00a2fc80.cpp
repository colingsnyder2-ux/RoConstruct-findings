// roc 2011-06 00a2fc80  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fc80
//
// 00a2fc80  68b0fea300           push 0xa3feb0
// 00a2fc85  e8d3b4ddff           call 0x80b15d
// 00a2fc8a  59                   pop ecx
// 00a2fc8b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2fc80;
extern void G1_func_00a2fc80(void*);
void func_00a2fc80()
{
    G1_func_00a2fc80(&G2_func_00a2fc80);
}
