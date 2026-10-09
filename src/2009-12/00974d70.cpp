// roc 2009-12 00974d70  unit: seg_00970000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00974d70
//
// 00974d70  68ac7e9d00           push 0x9d7eac
// 00974d75  e866d5cbff           call 0x6322e0
// 00974d7a  83c404               add esp, 4
// 00974d7d  a32828b900           mov dword ptr [0xb92828], eax
// 00974d82  c3                   ret 
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
