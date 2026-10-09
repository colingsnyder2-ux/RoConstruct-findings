// roc 2009-12 007b6cd0  unit: RBX::CleanStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b6cd0
//
// 007b6cd0  56                   push esi
// 007b6cd1  57                   push edi
// 007b6cd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b6cd6  8bf1                 mov esi, ecx
// 007b6cd8  8b4e08               mov ecx, dword ptr [esi + 8]
// 007b6cdb  57                   push edi
// 007b6cdc  e8ff270200           call 0x7d94e0
// 007b6ce1  56                   push esi
// 007b6ce2  8bcf                 mov ecx, edi
// 007b6ce4  e847c2ffff           call 0x7b2f30
// 007b6ce9  5f                   pop edi
// 007b6cea  5e                   pop esi
// 007b6ceb  c20400               ret 4
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
