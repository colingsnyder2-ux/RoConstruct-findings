// roc 2007-08 00770030  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00770030
//
// 00770030  6830907700           push 0x779030
// 00770035  e8e90cecff           call 0x630d23
// 0077003a  59                   pop ecx
// 0077003b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00770030;
extern void G1_func_00770030(void*);
void func_00770030()
{
    G1_func_00770030(&G2_func_00770030);
}
