// roc 2009-12 00972f10  unit: seg_00970000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00972f10
//
// 00972f10  6878f99c00           push 0x9cf978
// 00972f15  e8c6f3cbff           call 0x6322e0
// 00972f1a  83c404               add esp, 4
// 00972f1d  a3bc0bb900           mov dword ptr [0xb90bbc], eax
// 00972f22  c3                   ret 
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
