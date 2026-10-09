// roc 2009-12 00973070  unit: seg_00970000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00973070
//
// 00973070  68a4f99c00           push 0x9cf9a4
// 00973075  e866f2cbff           call 0x6322e0
// 0097307a  83c404               add esp, 4
// 0097307d  a34c0cb900           mov dword ptr [0xb90c4c], eax
// 00973082  c3                   ret 
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
