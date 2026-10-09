// roc 2009-12 007ba860  unit: RBX::TreeStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ba860
//
// 007ba860  56                   push esi
// 007ba861  57                   push edi
// 007ba862  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007ba866  8bf1                 mov esi, ecx
// 007ba868  8b4e08               mov ecx, dword ptr [esi + 8]
// 007ba86b  57                   push edi
// 007ba86c  e80f040200           call 0x7dac80
// 007ba871  56                   push esi
// 007ba872  8bcf                 mov ecx, edi
// 007ba874  e8c786ffff           call 0x7b2f40
// 007ba879  5f                   pop edi
// 007ba87a  5e                   pop esi
// 007ba87b  c20400               ret 4
// copied from an identical function in another client (function ?construct@GettingUp@ns_ROCX000000@@QAEXPAX@Z)

namespace ns_ROCX000000 {
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
