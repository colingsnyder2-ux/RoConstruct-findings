// roc 2007-08 00776340  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776340
//
// 00776340  68c0ca7700           push 0x77cac0
// 00776345  e8d9a9ebff           call 0x630d23
// 0077634a  59                   pop ecx
// 0077634b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00776340;
extern void G1_func_00776340(void*);
void func_00776340()
{
    G1_func_00776340(&G2_func_00776340);
}
