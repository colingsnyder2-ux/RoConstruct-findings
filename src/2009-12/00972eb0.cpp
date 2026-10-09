// roc 2009-12 00972eb0  unit: seg_00970000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00972eb0
//
// 00972eb0  686cf99c00           push 0x9cf96c
// 00972eb5  e826f4cbff           call 0x6322e0
// 00972eba  83c404               add esp, 4
// 00972ebd  a3040cb900           mov dword ptr [0xb90c04], eax
// 00972ec2  c3                   ret 
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
