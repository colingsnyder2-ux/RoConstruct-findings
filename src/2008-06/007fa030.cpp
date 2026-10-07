// roc 2008-06 007fa030  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa030
//
// 007fa030  68b01a8000           push 0x801ab0
// 007fa035  e87577eaff           call 0x6a17af
// 007fa03a  59                   pop ecx
// 007fa03b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007fa030;
extern void G1_func_007fa030(void*);
void func_007fa030()
{
    G1_func_007fa030(&G2_func_007fa030);
}
