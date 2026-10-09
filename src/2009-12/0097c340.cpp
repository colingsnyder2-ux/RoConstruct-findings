// roc 2009-12 0097c340  unit: seg_00970000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097c340
//
// 0097c340  684ce99e00           push 0x9ee94c
// 0097c345  e8965fcbff           call 0x6322e0
// 0097c34a  83c404               add esp, 4
// 0097c34d  a38c8db900           mov dword ptr [0xb98d8c], eax
// 0097c352  c3                   ret 
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
