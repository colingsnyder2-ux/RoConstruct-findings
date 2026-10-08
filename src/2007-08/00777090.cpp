// roc 2007-08 00777090  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777090
//
// 00777090  68a0cd7700           push 0x77cda0
// 00777095  e8899cebff           call 0x630d23
// 0077709a  59                   pop ecx
// 0077709b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00777090;
extern void G1_func_00777090(void*);
void func_00777090()
{
    G1_func_00777090(&G2_func_00777090);
}
