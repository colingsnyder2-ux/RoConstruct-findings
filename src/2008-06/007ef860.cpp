// roc 2008-06 007ef860  unit: seg_007e0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef860
//
// 007ef860  68f0ad7f00           push 0x7fadf0
// 007ef865  e8451febff           call 0x6a17af
// 007ef86a  59                   pop ecx
// 007ef86b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007ef860;
extern void G1_func_007ef860(void*);
void func_007ef860()
{
    G1_func_007ef860(&G2_func_007ef860);
}
