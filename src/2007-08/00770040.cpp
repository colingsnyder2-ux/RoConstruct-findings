// roc 2007-08 00770040  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00770040
//
// 00770040  6850907700           push 0x779050
// 00770045  e8d90cecff           call 0x630d23
// 0077004a  59                   pop ecx
// 0077004b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00770040;
extern void G1_func_00770040(void*);
void func_00770040()
{
    G1_func_00770040(&G2_func_00770040);
}
