// roc 2009-06 0088cd40  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088cd40
//
// 0088cd40  68109a8900           push 0x899a10
// 0088cd45  e8b1cde8ff           call 0x719afb
// 0088cd4a  59                   pop ecx
// 0088cd4b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_0088cd40;
extern void G1_func_0088cd40(void*);
void func_0088cd40()
{
    G1_func_0088cd40(&G2_func_0088cd40);
}
