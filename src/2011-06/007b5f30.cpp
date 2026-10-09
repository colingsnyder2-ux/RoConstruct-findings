// roc 2011-06 007b5f30  unit: RBX::StepJointsStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b5f30
//
// 007b5f30  56                   push esi
// 007b5f31  57                   push edi
// 007b5f32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b5f36  8bf1                 mov esi, ecx
// 007b5f38  8b4e08               mov ecx, dword ptr [esi + 8]
// 007b5f3b  57                   push edi
// 007b5f3c  e89ffcffff           call 0x7b5be0
// 007b5f41  56                   push esi
// 007b5f42  8bcf                 mov ecx, edi
// 007b5f44  e8b7bdfeff           call 0x7a1d00
// 007b5f49  5f                   pop edi
// 007b5f4a  5e                   pop esi
// 007b5f4b  c20400               ret 4
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
