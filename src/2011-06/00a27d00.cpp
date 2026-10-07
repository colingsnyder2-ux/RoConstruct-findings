// roc 2011-06 00a27d00  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27d00
//
// 00a27d00  68e0bea300           push 0xa3bee0
// 00a27d05  e85334deff           call 0x80b15d
// 00a27d0a  59                   pop ecx
// 00a27d0b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a27d00;
extern void G1_func_00a27d00(void*);
void func_00a27d00()
{
    G1_func_00a27d00(&G2_func_00a27d00);
}
