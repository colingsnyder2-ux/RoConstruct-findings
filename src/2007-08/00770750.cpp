// roc 2007-08 00770750  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770750
//
// 00770750  68c0947700           push 0x7794c0
// 00770755  e8c905ecff           call 0x630d23
// 0077075a  59                   pop ecx
// 0077075b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00770750;
extern void G1_func_00770750(void*);
void func_00770750()
{
    G1_func_00770750(&G2_func_00770750);
}
