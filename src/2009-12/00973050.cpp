// roc 2009-12 00973050  unit: seg_00970000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00973050
//
// 00973050  68f8f89c00           push 0x9cf8f8
// 00973055  e856f5cbff           call 0x6325b0
// 0097305a  83c404               add esp, 4
// 0097305d  a3640cb900           mov dword ptr [0xb90c64], eax
// 00973062  c3                   ret 
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
