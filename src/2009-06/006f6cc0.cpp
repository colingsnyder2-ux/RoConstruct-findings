// roc 2009-06 006f6cc0  unit: RBX::MechToAssemblyStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f6cc0
//
// 006f6cc0  56                   push esi
// 006f6cc1  57                   push edi
// 006f6cc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f6cc6  8bf1                 mov esi, ecx
// 006f6cc8  8b4e08               mov ecx, dword ptr [esi + 8]
// 006f6ccb  57                   push edi
// 006f6ccc  e85f40feff           call 0x6dad30
// 006f6cd1  56                   push esi
// 006f6cd2  8bcf                 mov ecx, edi
// 006f6cd4  e877effdff           call 0x6d5c50
// 006f6cd9  5f                   pop edi
// 006f6cda  5e                   pop esi
// 006f6cdb  c20400               ret 4
// copied from an identical function in another client (function ?construct@GettingUp@ns_ROCX000001@@QAEXPAX@Z)

namespace ns_ROCX000001 {
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
