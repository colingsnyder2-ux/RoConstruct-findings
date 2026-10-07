// roc 2008-06 007f9910  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9910
//
// 007f9910  6890188000           push 0x801890
// 007f9915  e8957eeaff           call 0x6a17af
// 007f991a  59                   pop ecx
// 007f991b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f9910;
extern void G1_func_007f9910(void*);
void func_007f9910()
{
    G1_func_007f9910(&G2_func_007f9910);
}
