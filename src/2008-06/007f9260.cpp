// roc 2008-06 007f9260  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9260
//
// 007f9260  6850178000           push 0x801750
// 007f9265  e84585eaff           call 0x6a17af
// 007f926a  59                   pop ecx
// 007f926b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f9260;
extern void G1_func_007f9260(void*);
void func_007f9260()
{
    G1_func_007f9260(&G2_func_007f9260);
}
