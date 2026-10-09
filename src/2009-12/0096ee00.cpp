// roc 2009-12 0096ee00  unit: seg_00960000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096ee00
//
// 0096ee00  68c82c9a00           push 0x9a2cc8
// 0096ee05  e8d634ccff           call 0x6322e0
// 0096ee0a  83c404               add esp, 4
// 0096ee0d  a37854b800           mov dword ptr [0xb85478], eax
// 0096ee12  c3                   ret 
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
