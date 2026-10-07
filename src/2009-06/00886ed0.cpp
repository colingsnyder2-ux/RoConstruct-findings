// roc 2009-06 00886ed0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886ed0
//
// 00886ed0  68a04f8900           push 0x894fa0
// 00886ed5  e8212ce9ff           call 0x719afb
// 00886eda  59                   pop ecx
// 00886edb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00886ed0;
extern void G1_func_00886ed0(void*);
void func_00886ed0()
{
    G1_func_00886ed0(&G2_func_00886ed0);
}
