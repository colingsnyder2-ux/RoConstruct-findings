// roc 2009-12 00973250  unit: seg_00970000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00973250
//
// 00973250  684cd59a00           push 0x9ad54c
// 00973255  e886f0cbff           call 0x6322e0
// 0097325a  83c404               add esp, 4
// 0097325d  a3540cb900           mov dword ptr [0xb90c54], eax
// 00973262  c3                   ret 
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
