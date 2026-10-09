// roc 2009-12 00969ce0  unit: seg_00960000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969ce0
//
// 00969ce0  68a01d9b00           push 0x9b1da0
// 00969ce5  e8f685ccff           call 0x6322e0
// 00969cea  83c404               add esp, 4
// 00969ced  a330cbb700           mov dword ptr [0xb7cb30], eax
// 00969cf2  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000016@ns_ROCX000016@@YAXXZ)

namespace ns_ROCX000016 {
extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_005cd820(void*);
void fn_ROCX000016()
{
    G1_VALUE = (int*)G2_func_005cd820(&G3_OBJ);
}
}
