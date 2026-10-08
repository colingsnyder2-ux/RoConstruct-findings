// roc 2007-08 00772b40  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772b40
//
// 00772b40  6840a67700           push 0x77a640
// 00772b45  e8d9e1ebff           call 0x630d23
// 00772b4a  59                   pop ecx
// 00772b4b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00772b40;
extern void G1_func_00772b40(void*);
void func_00772b40()
{
    G1_func_00772b40(&G2_func_00772b40);
}
