// roc 2011-06 007efc00  unit: RBX::MechToAssemblyStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007efc00
//
// 007efc00  56                   push esi
// 007efc01  57                   push edi
// 007efc02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007efc06  8bf1                 mov esi, ecx
// 007efc08  8b4e08               mov ecx, dword ptr [esi + 8]
// 007efc0b  57                   push edi
// 007efc0c  e8bf45fcff           call 0x7b41d0
// 007efc11  56                   push esi
// 007efc12  8bcf                 mov ecx, edi
// 007efc14  e8e720fbff           call 0x7a1d00
// 007efc19  5f                   pop edi
// 007efc1a  5e                   pop esi
// 007efc1b  c20400               ret 4
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
