// roc 2009-12 00969d20  unit: seg_00960000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969d20
//
// 00969d20  68b41d9b00           push 0x9b1db4
// 00969d25  e8b685ccff           call 0x6322e0
// 00969d2a  83c404               add esp, 4
// 00969d2d  a338cbb700           mov dword ptr [0xb7cb38], eax
// 00969d32  c3                   ret 
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
