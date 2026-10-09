// roc 2009-12 00969e00  unit: seg_00960000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969e00
//
// 00969e00  68041e9b00           push 0x9b1e04
// 00969e05  e8d684ccff           call 0x6322e0
// 00969e0a  83c404               add esp, 4
// 00969e0d  a354cbb700           mov dword ptr [0xb7cb54], eax
// 00969e12  c3                   ret 
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
