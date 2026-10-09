// roc 2009-12 00632450  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00632450
//
// 00632450  6856fd9900           push 0x99fd56
// 00632455  e886feffff           call 0x6322e0
// 0063245a  83c404               add esp, 4
// 0063245d  a30051b800           mov dword ptr [0xb85100], eax
// 00632462  c3                   ret 
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
