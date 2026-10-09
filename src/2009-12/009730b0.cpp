// roc 2009-12 009730b0  unit: seg_00970000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009730b0
//
// 009730b0  6830249a00           push 0x9a2430
// 009730b5  e826f2cbff           call 0x6322e0
// 009730ba  83c404               add esp, 4
// 009730bd  a3080cb900           mov dword ptr [0xb90c08], eax
// 009730c2  c3                   ret 
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
