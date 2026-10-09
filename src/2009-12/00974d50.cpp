// roc 2009-12 00974d50  unit: seg_00970000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00974d50
//
// 00974d50  686cd6b300           push 0xb3d66c
// 00974d55  e886d5cbff           call 0x6322e0
// 00974d5a  83c404               add esp, 4
// 00974d5d  a3c426b900           mov dword ptr [0xb926c4], eax
// 00974d62  c3                   ret 
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
