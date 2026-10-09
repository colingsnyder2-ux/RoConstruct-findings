// roc 2011-06 007b5be0  unit: RBX::TreeStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b5be0
//
// 007b5be0  56                   push esi
// 007b5be1  57                   push edi
// 007b5be2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b5be6  8bf1                 mov esi, ecx
// 007b5be8  8b4e08               mov ecx, dword ptr [esi + 8]
// 007b5beb  57                   push edi
// 007b5bec  e81f9e0300           call 0x7efa10
// 007b5bf1  56                   push esi
// 007b5bf2  8bcf                 mov ecx, edi
// 007b5bf4  e807c1feff           call 0x7a1d00
// 007b5bf9  5f                   pop edi
// 007b5bfa  5e                   pop esi
// 007b5bfb  c20400               ret 4
// copied from an identical function in another client (function ?construct@GettingUp@ns_ROCX00000e@@QAEXPAX@Z)

namespace ns_ROCX00000e {
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
