// roc 2010-06 00762180  unit: RBX::TreeStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00762180
//
// 00762180  56                   push esi
// 00762181  57                   push edi
// 00762182  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00762186  8bf1                 mov esi, ecx
// 00762188  8b4e08               mov ecx, dword ptr [esi + 8]
// 0076218b  57                   push edi
// 0076218c  e87fae0200           call 0x78d010
// 00762191  56                   push esi
// 00762192  8bcf                 mov ecx, edi
// 00762194  e827e9feff           call 0x750ac0
// 00762199  5f                   pop edi
// 0076219a  5e                   pop esi
// 0076219b  c20400               ret 4
// copied from an identical function in another client (function ?construct@GettingUp@ns_ROCX00000b@@QAEXPAX@Z)

namespace ns_ROCX00000b {
struct SubA {
    void methodA(int);
};

struct SubB {
    void methodB(void*);
};

struct GettingUp {
    char pad[8];
    SubA* subA;
    void construct(void*);
};

void GettingUp::construct(void* arg)
{
    subA->methodA((int)arg);
    ((SubB*)arg)->methodB(this);
}
}
