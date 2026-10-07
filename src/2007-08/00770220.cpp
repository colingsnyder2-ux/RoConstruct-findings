// roc 2007-08 00770220  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00770220
//
// 00770220  68c0927700           push 0x7792c0
// 00770225  e8f90aecff           call 0x630d23
// 0077022a  59                   pop ecx
// 0077022b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00770220;
extern void G1_func_00770220(void*);
void func_00770220()
{
    G1_func_00770220(&G2_func_00770220);
}
