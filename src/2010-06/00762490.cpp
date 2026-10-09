// roc 2010-06 00762490  unit: RBX::StepJointsStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00762490
//
// 00762490  56                   push esi
// 00762491  57                   push edi
// 00762492  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00762496  8bf1                 mov esi, ecx
// 00762498  8b4e08               mov ecx, dword ptr [esi + 8]
// 0076249b  57                   push edi
// 0076249c  e8dffcffff           call 0x762180
// 007624a1  56                   push esi
// 007624a2  8bcf                 mov ecx, edi
// 007624a4  e817e6feff           call 0x750ac0
// 007624a9  5f                   pop edi
// 007624aa  5e                   pop esi
// 007624ab  c20400               ret 4
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
