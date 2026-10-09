// roc 2009-12 00969d60  unit: seg_00960000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969d60
//
// 00969d60  68cc1d9b00           push 0x9b1dcc
// 00969d65  e87685ccff           call 0x6322e0
// 00969d6a  83c404               add esp, 4
// 00969d6d  a340cbb700           mov dword ptr [0xb7cb40], eax
// 00969d72  c3                   ret 
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
