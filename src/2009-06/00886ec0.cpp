// roc 2009-06 00886ec0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886ec0
//
// 00886ec0  68904f8900           push 0x894f90
// 00886ec5  e8312ce9ff           call 0x719afb
// 00886eca  59                   pop ecx
// 00886ecb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00886ec0;
extern void G1_func_00886ec0(void*);
void func_00886ec0()
{
    G1_func_00886ec0(&G2_func_00886ec0);
}
