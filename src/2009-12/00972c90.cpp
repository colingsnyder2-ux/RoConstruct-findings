// roc 2009-12 00972c90  unit: seg_00970000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00972c90
//
// 00972c90  6818f99c00           push 0x9cf918
// 00972c95  e846f6cbff           call 0x6322e0
// 00972c9a  83c404               add esp, 4
// 00972c9d  a3900bb900           mov dword ptr [0xb90b90], eax
// 00972ca2  c3                   ret 
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
