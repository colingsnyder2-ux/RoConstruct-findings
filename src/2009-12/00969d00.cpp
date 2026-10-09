// roc 2009-12 00969d00  unit: seg_00960000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969d00
//
// 00969d00  68ac1d9b00           push 0x9b1dac
// 00969d05  e8d685ccff           call 0x6322e0
// 00969d0a  83c404               add esp, 4
// 00969d0d  a334cbb700           mov dword ptr [0xb7cb34], eax
// 00969d12  c3                   ret 
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
