// roc 2009-12 00973190  unit: seg_00970000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00973190
//
// 00973190  68d0f99c00           push 0x9cf9d0
// 00973195  e846f1cbff           call 0x6322e0
// 0097319a  83c404               add esp, 4
// 0097319d  a3c00bb900           mov dword ptr [0xb90bc0], eax
// 009731a2  c3                   ret 
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
