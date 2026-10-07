// roc 2008-06 007f9230  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9230
//
// 007f9230  68c0168000           push 0x8016c0
// 007f9235  e87585eaff           call 0x6a17af
// 007f923a  59                   pop ecx
// 007f923b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f9230;
extern void G1_func_007f9230(void*);
void func_007f9230()
{
    G1_func_007f9230(&G2_func_007f9230);
}
