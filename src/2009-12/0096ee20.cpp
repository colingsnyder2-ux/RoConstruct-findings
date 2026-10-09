// roc 2009-12 0096ee20  unit: seg_00960000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096ee20
//
// 0096ee20  684cc09c00           push 0x9cc04c
// 0096ee25  e8b634ccff           call 0x6322e0
// 0096ee2a  83c404               add esp, 4
// 0096ee2d  a3a851b800           mov dword ptr [0xb851a8], eax
// 0096ee32  c3                   ret 
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
