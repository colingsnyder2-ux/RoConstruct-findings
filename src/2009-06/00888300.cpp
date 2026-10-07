// roc 2009-06 00888300  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888300
//
// 00888300  68305f8900           push 0x895f30
// 00888305  e8f117e9ff           call 0x719afb
// 0088830a  59                   pop ecx
// 0088830b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888300;
extern void G1_func_00888300(void*);
void func_00888300()
{
    G1_func_00888300(&G2_func_00888300);
}
