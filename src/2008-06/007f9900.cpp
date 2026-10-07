// roc 2008-06 007f9900  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9900
//
// 007f9900  6850188000           push 0x801850
// 007f9905  e8a57eeaff           call 0x6a17af
// 007f990a  59                   pop ecx
// 007f990b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f9900;
extern void G1_func_007f9900(void*);
void func_007f9900()
{
    G1_func_007f9900(&G2_func_007f9900);
}
