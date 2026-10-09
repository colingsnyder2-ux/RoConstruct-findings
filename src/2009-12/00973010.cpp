// roc 2009-12 00973010  unit: seg_00970000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00973010
//
// 00973010  689cf99c00           push 0x9cf99c
// 00973015  e8c6f2cbff           call 0x6322e0
// 0097301a  83c404               add esp, 4
// 0097301d  a3f00bb900           mov dword ptr [0xb90bf0], eax
// 00973022  c3                   ret 
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
